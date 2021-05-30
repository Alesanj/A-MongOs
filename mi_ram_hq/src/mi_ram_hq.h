/*
 * mi_ram_hq.h
 *
 *  Created on: 29 may. 2021
 *      Author: utnso
 */

#ifndef MI_RAM_HQ_H_
#define MI_RAM_HQ_H_


#include <stdio.h>
#include <stdlib.h>
#include <nivel-gui/nivel-gui.h>
#include <nivel-gui/tad_nivel.h>
#include <curses.h>
#include <sys/socket.h>
#include "TAD_TRIPULANTE.h"
#include "TAD_PATOTA.h"
#include <commons/collections/list.h>
#include <pthread.h>
#include <conexion.h>
#include <serializacion.h>

#define PUERTOPREDETERMINADO 6667

#define TRIPULANTE 1
#define PATOTA 2
#define TAREASPATOTA 3
#define PEDIRTAREA 4
#define ENVIOTAREA 5
#define ACTUALIZAR_POS 6
#define INICIOPATOTA 7

void dibujarTripulante(Tripulante*,NIVEL*);
int crear_mapa();


typedef struct
{
   uint32_t pid;
   uint32_t* tareas ;
}PCB;

typedef struct
{
   uint32_t tid;
   char* estado;
   uint32_t posx;
   uint32_t posy;
   uint32_t* prox_tarea;
   uint32_t* puntero_pcb;
}TCB;

#endif /* MI_RAM_HQ_H_ */