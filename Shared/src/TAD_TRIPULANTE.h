/*
 * TAD_TRIPULANTE.h
 *
 *  Created on: 6 may. 2021
 *      Author: utnso
 */

#ifndef SRC_TAD_TRIPULANTE_H_
#define SRC_TAD_TRIPULANTE_H_
#include <commons/collections/list.h>
#include <stdbool.h>
#include <commons/collections/node.h>
#include <stdio.h>
#include <stdlib.h>
#include <commons/bitarray.h>
#include <commons/log.h>
#include <commons/string.h>
#include <stdint.h>

typedef struct
{
	uint8_t id;
	uint8_t idPatota;
	uint32_t estado_length;
	char* estado;
	uint32_t Tarea_length;
	char* Tarea;
	uint8_t posicionX;
	uint8_t posicionY;
	pthread_t hilo;

} Tripulante;

Tripulante* tripulanteCreate(uint8_t id, uint8_t posicionX,uint8_t posicionY);

void mostrarTripulante(uint8_t idPatota, Tripulante* tripulante);




#endif /* SRC_TAD_TRIPULANTE_H_ */