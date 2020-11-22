//============================================================================
// Name        : pruebasTadtareas.h
// Author      : Profesores de la asignatura IP/FP
// Version     : Curso 2020/21
// Copyright   :
// Description : Definición de las pruebas para el  vov tareas pendientes
//============================================================================

#ifndef PRUEBASTAREAS_H_
#define PRUEBASTAREAS_H_
#include "tareas.h"


/*
 * Al iniciar la función cuantos debe devolver 0, vov vacio
 */
void pruebaIniciar    ();

/*
  Casos de prueba sobre un vov "t" inicializado. Ocupación = 0

  tareas de entrada:
           Id  descripción         Asig. duración
  Tarea1 -> 1, "Actividad 7 IP ",     1,  1.30
  Tarea2 -> 2, "Preparar cálculo ",   2,  3.45
  Tarea3 -> 3, "Preparar examen IP ", 1,  2.10
  Tarea4 -> 4, "Tarea previa S09 ",   1,  1.00

  caso||dato a insertar || ocupadas antes || ocupadas después
  _______________________________________________________________________________
    1    Tarea1	              0 				1
    2    Tarea2               1					2
    3    Tarea3               2				    3
    4    Tarea4		          3			        4

  Estado del vector después de las inserciones. Ocupación = 4
    t[0]        t[1]        t[2]        t[3]
    ̣̣̣_____________________________________________________
 	 tarea4      tarea1       tarea3       tarea2

 */
void pruebaInsertar       ();
/*
  Casos de prueba sobre un vov "t" inicializado.
  Inserto 4 tareas en el vector

  tareas de entrada:
           Id  descripción         Asig. duración
  tarea1 -> 1, "Actividad 7 IP ",     1,  1.30
  tarea2 -> 2, "Preparar cálculo ",   2,  3.45
  tarea3 -> 3, "Preparar examen IP ", 1,  2.10
  tarea4 -> 4, "Tarea previa S09 ",   1,  1.00


  caso||tarea a insertar || duración después de insertar las tareas
  _______________________________________________________________
    1    tarea1	             1.30
    2    tarea2              4.75
    3    tarea3              6.85
    4    tarea4		         7.85


  Total duracion todas las tareas: 7.85
*/
void pruebaTotal     ();

/*
  Casos de prueba sobre un vov "t" inicializado.
  Inserto 4 tareas en el vector

  tareas de entrada:
           Id  descripción         Asig. duración
  tarea1 -> 1, "Actividad 7 IP ",     1,  1.30
  tarea2 -> 2, "Preparar cálculo ",   2,  3.45
  tarea3 -> 3, "Preparar examen IP ", 1,  2.10
  tarea4 -> 4, "Tarea previa S09 ",   1,  1.00


  caso||   horas || Id devuelto
  _______________________________________________________________
    1       1.30	    1
    2       2.00        1
    3       3.00        3
    4       4.00		2
*/
void pruebaBuscar    ();



// Todas las pruebas
void pruebaTareas ();



#endif /* PRUEBASTAREAS_H_ */
