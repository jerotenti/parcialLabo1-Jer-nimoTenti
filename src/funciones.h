#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define MAX_CHARS 25
#define VACIO 0
#define OCUPADO 1

typedef struct
{
	int idServicio;
	char descripcionServicio[MAX_CHARS];
	int precio;
	int isEmpty;
}Servicio;

typedef struct
{
	int idTrabajo;
	char marcaBicileta[MAX_CHARS];
	int rodadoBicicleta;
	int idServicio;
	int fecha;
	int isEmpty;
}Trabajo;

void Trabajo_inicializar(Trabajo listaTrabajos[], int tam);
int Trabajo_ObtenerID(void);
int Trabajo_ObtenerIndexLibre(Trabajo listaTrabajos[], int tam);
int Trabajo_Alta(Trabajo listaTrabajos[], int tam);
Trabajo Trabajo_cargarDatos(void);

#endif /* FUNCIONES_H_ */
