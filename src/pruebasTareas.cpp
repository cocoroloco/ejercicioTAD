//============================================================================
// Name        : pruebasTadtareas.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : implementación de las pruebas para el  vov tareas pendientes
//============================================================================


#include <iostream>
#include <cmath>

#include "pruebasTareas.h"
using namespace std;


/* En el diseño de las pruebas se han tenido en cuenta las pre-condiciones de todos los módulos.
 * Ninguno de los casos que se prueban viola dichas pre-condiciones.
 */

void pruebaIniciar() {
	cout << "INICIO: PRUEBAS INICIAR...." << endl;
	Tareas t;
	iniciar(t);
	if (cuantos(t) != 0)
		cout << "ERROR INICIAR: no tiene 0 elementos"<<endl;;
	cout << "FIN: PRUEBAS INICIAR" << endl;
}

void pruebaInsertar() {

	Tareas t;
    // creo 4 tareas pendientes  para insertar y les doy valores
	TareaPendiente tp1, tp2, tp3, tp4;
	nueva(tp1, 1, "Actividad 7 IP ",     1, 1.30);
	nueva(tp2, 2, "Preparar cálculo ",   2, 3.45);
	nueva(tp3, 3, "Preparar examen IP ", 1, 2.10);
	nueva(tp4, 4, "Tarea previa S09 ",   1, 1.00);

	cout << "INICIO: PRUEBAS INSERTAR...." << endl;
	iniciar(t);

	// caso 1: inserto en la posición 0, el vov está vacío
	insertar(t,tp1);
	if (cuantos(t) != 1)
		cout << "ERROR: Fallo en el insertar cuando el vov está vacio";
	else
		mostrar(t);
	cout << endl;

	// caso 2: inserto en orden debe quedar en la posicion 1.
	//         Existe al menos un elemento
	insertar(t, tp2);
	if (cuantos(t) != 2)
		cout << "ERROR: Fallo en el insertar final";
	else
		mostrar(t);
	cout << endl;

	// caso 3: inserto en orden, debe quedar en la posicio 1 y desplazar la tarea
	//         la tarea anterior a la posicion 2.
	insertar(t, tp3);
	if (cuantos(t) != 3)
		cout << "ERROR: Fallo al inserta en una posición intermedia";
	else
		mostrar(t);
	cout << endl;

	// caso 4: inserto una tarea menor a todas, se inserta en la posicion 0
	//         todos los demas datos se desplazan hacia la derecha
	insertar(t, tp4);
	if (cuantos(t) != 4)
		cout << "ERROR: Fallo en el insertar al principio";
	else
		mostrar(t);

	cout << "FIN: PRUEBAS INSERTAR" << endl;
}

void pruebaTotal     (){
	const float ERROR= 0.00001;
	Tareas t;
	// creo 4 tareas pendientes  para insertar y les doy valores
	TareaPendiente tp1, tp2, tp3, tp4;
	nueva(tp1, 1, "Actividad 7 IP ",     1, 1.30);
	nueva(tp2, 2, "Preparar cálculo ",   2, 3.45);
	nueva(tp3, 3, "Preparar examen IP ", 1, 2.10);
	nueva(tp4, 4, "Tarea previa S09 ",   1, 1.00);

	cout << "INICIO: PRUEBAS TOTAL...." << endl;
	iniciar(t);
	insertar(t, tp1);
	if (abs((total(t) - 1.30))>ERROR)
			cout << "Error: prueba total nº1"<< endl;
	insertar(t, tp2);
	if (abs((total(t) - 4.75))>ERROR)
			cout << "Error: prueba total nº2"<<endl;
	insertar(t, tp3);
	if (abs((total(t)-  6.85))>ERROR)
			cout << "Error: prueba total nº3"<<endl;
	insertar(t, tp4);
	if (abs((total(t) -7.85))> ERROR)
		cout << "Error: prueba total nº4"<<endl;

	cout << "FIN: PRUEBAS TOTAL...." << endl;
}

void pruebaBuscar(){
	Tareas t;
	// creo 4 tareas pendientes  para insertar y les doy valores
	TareaPendiente tp1, tp2, tp3, tp4;
	nueva(tp1, 1, "Actividad 7 IP ",     1, 1.30);
	nueva(tp2, 2, "Preparar cálculo ",   2, 3.45);
	nueva(tp3, 3, "Preparar examen IP ", 1, 2.10);
	nueva(tp4, 4, "Tarea previa S09 ",   1, 1.00);

	cout << "INICIO: PRUEBAS BUSCAR...." << endl;
	iniciar(t);
	insertar(t, tp1);
	insertar(t, tp2);
	insertar(t, tp3);
	insertar(t, tp4);

	if (buscar (t, 1.30) !=1)
		cout <<"Error en la prueba nº1"<<endl;
	if (buscar (t, 2.0) !=1)
		cout <<"Error en la prueba nº2"<<endl;
	if (buscar (t, 3.0) !=3)
		cout <<"Error en la prueba nº3"<<endl;
	if (buscar (t, 4.0) !=2)
		cout <<"Error en la prueba nº4"<<endl;

	cout << "FIN: PRUEBAS BUSCAR...." << endl;
}

void pruebaTareas() {
	cout <<"Inicio pruebas.........."<<endl;
    pruebaIniciar ();
	pruebaInsertar();
	pruebaTotal   ();
	pruebaBuscar  ();
	cout <<"Fin pruebas............"<<endl;
}

