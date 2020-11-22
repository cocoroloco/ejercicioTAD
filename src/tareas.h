//============================================================================
// Name        : tareas.h
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Especificación del tipo de datos Tareas (VoV)
//============================================================================


#ifndef TAREAS_H_
#define TAREAS_H_

#include "tareaPendiente.h"
const int MAX=25;

typedef TareaPendiente TVectorTareas[MAX];

struct Tareas{
	TVectorTareas vTareas;
	int ocupadas;
};

/*
 * PRE:  {}
 * POST: { inicializa la estructura t (t.ocupadas=0) }
 * COMPLEJIDAD: O(1)
 */
void iniciar (Tareas &t);

/*
 * PRE:  { t inicializada y no llena, tP inicializada }
 * POST: { Inserta la tarea tP en la estructura t mateniéndola ordenada por duracion crecietne de las tareas }
 * COMPLEJIDAD: O(n)
 */
void insertar (Tareas &t, TareaPendiente tP);

/*
 * PRE:  { t inicializada y no vacía (ocupadas > 0) }
 * POST: { Devuelve la suma de la duración de todas las tareas almacenadas en t }
 * COMPLEJIDAD: O(n)
 */
float total (Tareas t);

/*
 * PRE:  { t inicializada y no vacía (ocupadas > 0), h>0 }
 * POST: { Devuelve el id de la tarea de mayor duración de las almacenadas en t que pueda resolverse como mucho en h horas }
 * COMPLEJIDAD: O(n)
 */
int buscar (Tareas t, float h);


// Operaciones añadidas para poder probar el TAD

/*
 * PRE:  { t inicializada }
 * POST: { muestra por pantalla los datos de todas las tareas pendientes almacenadas en t }
 * COMPLEJIDAD: O(n)
 */
void mostrar (Tareas t);

/*
 * PRE:  { t inicializada }
 * POST: { devuelve el número de tareas pendientes almacenadas en t }
 * COMPLEJIDAD: O(1)
 */
int cuantos (Tareas t);

/*
 * PRE:  { t inicializada }
 * POST: { devuelve true si la estructura t está llena; false en caso contrario }
 * COMPLEJIDAD: O(1)
 */
bool estaLlena (Tareas t);


#endif /* TAREAS_H_ */
