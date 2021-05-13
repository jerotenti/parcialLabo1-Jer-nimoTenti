#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

typedef struct
{
	int idServicio;
	char descripcionServicio[25];
	int precio;
}Servicio;

typedef struct
{
	int id;
	char marcaBicileta[25];
	int rodadoBicicleta;
	int idServicio;
	int fecha;
}Trabajo;

#endif /* FUNCIONES_H_ */
