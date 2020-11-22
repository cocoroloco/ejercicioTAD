//============================================================================
// Name        : TareasMain.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Programa que permite gestionar una lista de tareas pendientes
//============================================================================

#include <iostream>

#include "pruebasTareaPendiente.h"
#include "pruebasTareas.h"
#include "tareas.h"
using namespace std;

int menu (){
	int opcion;
	cout << endl << endl;
	cout << "1.- Insertar tarea  " << endl;
	cout << "2.- Duración total  " << endl;
	cout << "3.- Buscar          " << endl;
	cout << "4.- Mostrar         " << endl << endl;
	cout << "5.- Terminar        " << endl;
	cin  >> opcion;
	return opcion;
}

void ejecutar() {
	Tareas t;
	TareaPendiente tp;
	bool terminar = false;
	int opcion = 0;
	int id = 0;
	string descripcion;
	int asignatura;
	float duracion;

	iniciar (t);

	while (!terminar) {
		opcion = menu();
		cin.ignore();
		switch (opcion) {
		case 1:	// Creación e inserción de una nueva tarea
			// Antes de crear la tarea e insertarla en la estructura, comprobamos
			// que ésta no está llena (pre-condición del módulo insertar).
			if ( !estaLlena ( t ) ){
				cout <<"Descripción de la tarea " << endl;
				getline (cin, descripcion);
				cout <<"Asignatura: " << endl;
				cin>>asignatura;
				cout <<"Duración: " << endl;
				cin>>duracion;
				nueva(tp, id++, descripcion, asignatura, duracion);
				insertar (t, tp);
			}
			else {
				cout << "Imposible insertar una nueva tarea. La estructura está llena." << endl;
			}
			break;
		case 2:	// Cálculo de la duración total de todas las tareas incluidas en la estructura
			// Antes de invocar al módulo "total" comprobamos que la estructura no esté vacía (pre-condición)
			if ( cuantos(t) > 0 )
				cout << "Duración total de las tareas " << total (t) << endl;
			else
				cout << "La estructura está vacía. Duración total de las tareas = 0." << endl;
			break;
		case 3: // Buscar tarea de mayor duración que pueda resolverse en h horas
			// Antes de invocar al módulo "buscar" comprobamos que la estructura no esté vacía (pre-condición)
			if ( cuantos(t) > 0 ) {
				cout << "¿Duración máxima de la tarea? " << endl;
				cin>> duracion;
				cout <<" El Id de la tarea encontrada es "<< buscar(t, duracion) << endl;;
			}
			else
				cout << "La estructura está vacía. No hay nada que buscar." << endl;
			break;
		case 4:
			mostrar (t);
			break;
		case 5:
			terminar = true;
			break;
		}
	}
}

int main() {

	pruebaTareaPendiente ( );
	pruebaTareas ( );

	ejecutar ();

	return 0;
}
