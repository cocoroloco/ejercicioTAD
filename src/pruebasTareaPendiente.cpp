//============================================================================
// Name        : pruebasTareasPendiente.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2017/18
// Copyright   :
// Description : Implementación de las pruebas para una tareaPendiente
//============================================================================

#include "pruebasTareaPendiente.h"


void pruebaTareaPendiente(){
	cout << "INICIO: prueba de la tarea pendiente "<<endl;

	TareaPendiente tp;
	nueva(tp, 1, "Actividad 7 IP", 3, 1.30);

	if (obtenerIdentificador(tp) != 1)
		cout << "ERROR al obtener el id de la tarea";
	if (obtenerDescripcion(tp) != "Actividad 7 IP")
		cout << "ERROR al obtener la descripción de la tarea";
	if (obtenerAsignatura(tp) != 3)
		cout << "ERROR al obtener la asignatura de la tarea";
	if (obtenerDuracion(tp) != 1.30f)
			cout << "ERROR al obtener la duraciónde la tarea";

	cout << "FIN: prueba de la tarea pendiente "<<endl;

}
