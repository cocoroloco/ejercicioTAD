//============================================================================
// Name        : tareas.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Implementación del tipo de datos Tareas (VoV)
//============================================================================


#include <iostream>

#include "tareas.h"
using namespace std;

void iniciar   (Tareas &t) {
	t.ocupadas = 0;

}
void insertar (Tareas &t, TareaPendiente tP){

	int pos;


	if(t.ocupadas == MAX){
		return;
	}
	pos = 0;
	while(pos <t.ocupadas){
		tP = t.vTareas[pos];
		if(tP.duracion < obtenerDuracion(t.vTareas[pos])){
			break;
		}
		else if(tP.duracion == obtenerDuracion(t.vTareas[pos])){
			return;
		}
		 else{
			pos = pos +1;
		}
	}


	t.ocupadas = t.ocupadas+1;

	for(int i = t.ocupadas; i > pos; i = i -1){
		t.vTareas[i] = t.vTareas[i-1];
	}
	nueva(tP, tP.id,tP.descripcion,tP.asignatura,tP.duracion);
	t.vTareas[pos] = tP;
	return;
}

float total (Tareas t){
	int i,total;
	total = 0;
	for(i = 0;i < t.ocupadas;i++){
		total= total + obtenerDuracion(t.vTareas[i]);
	}


	return total;
}

int  buscar (Tareas t, float h){
	int i;
	bool enc;
	enc = false;
	for(i = 0;i < t.ocupadas && !enc;i++){
		if(h > obtenerDuracion(t.vTareas[i])){
			enc = true;
		}

	}
	return obtenerIdentificador(t.vTareas[i-1]);
}

void mostrar (Tareas t){
	int i; // indice toma valores entre 0 y ocupadad
	cout << "Nº de tareas pendientes: " << t.ocupadas << endl;
	for (i = 0; i < t.ocupadas; i++) {
		cout <<"\t Duración: "<< obtenerDuracion(t.vTareas[i])<<" ";
		cout<< "\t id:"<< obtenerIdentificador(t.vTareas[i])<<" ";
		cout << obtenerDescripcion(t.vTareas[i])<<" ";
		cout << "\tAsignatura: "<<obtenerAsignatura(t.vTareas[i])<<" "<<endl;
	}
}

int cuantos (Tareas t) {
	return t.ocupadas;
}

bool estaLlena  (Tareas t) {
	return t.ocupadas == MAX;
}
