//============================================================================
// Name        : tareasPendientes.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Implementación del tipo de datos tareaPendiente
//============================================================================

#include "tareaPendiente.h"

void nueva (TareaPendiente &tP, int id, string descripcion, int asignatura, float duracion) {
	tP.id = id;
	tP.descripcion = descripcion;
	tP.asignatura = asignatura;
	tP.duracion = duracion;
}

int obtenerIdentificador (TareaPendiente tP) {
	return tP.id;
}

string obtenerDescripcion (TareaPendiente tP) {
	return tP.descripcion;
}

int obtenerAsignatura (TareaPendiente tP) {
	return tP.asignatura;
}

float obtenerDuracion (TareaPendiente tP) {
	return tP.duracion;
}
