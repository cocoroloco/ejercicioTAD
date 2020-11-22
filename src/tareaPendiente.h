//============================================================================
// Name        : tareasPendientes.h
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Especificación del tipo de datos tareaPendiente
//============================================================================


#ifndef TAREAPENDIENTE_H_
#define TAREAPENDIENTE_H_
#include <string>
using namespace std;

struct TareaPendiente{
	int    id;
	string descripcion;
	int    asignatura;
	float  duracion;
};

/*
 * PRE:  { }
 * POST: { devuelve la tarea pendiente tP incializada con id, descripcion, asignatura y duracion }
 * COMPLEJIDAD: O(1)
 */
void nueva (TareaPendiente &tP, int id, string descripcion, int asignatura, float duracion);

/*
 * PRE:  { la tarea pendiente tP debe estar correctamente inicializada }
 * POST: { devuelve el id de la tarea pendiente tP }
 * COMPLEJIDAD: O(1)
 */
int obtenerIdentificador (TareaPendiente tP);

/*
 * PRE:  { la tarea pendiente tP debe estar correctamente inicializada }
 * POST: { devuelve la descripción de la tarea pendiente tP }
 * COMPLEJIDAD: O(1)
 */
string obtenerDescripcion (TareaPendiente tP);

/*
 * PRE:  { la tarea pendiente tP debe estar correctamente inicializada }
 * POST: { devuelve la asignatura de la tarea pendiente tP }
 * COMPLEJIDAD: O(1)
 */
int obtenerAsignatura (TareaPendiente tP);

/*
 * PRE:  { la tarea pendiente tP debe estar correctamente inicializada }
 * POST: { devuelve la duración de la tarea pendiente tP}
 * COMPLEJIDAD: O(1)
 */
float obtenerDuracion (TareaPendiente tP);

#endif /* TAREAPENDIENTE_H_ */
