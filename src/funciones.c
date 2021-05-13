#include "funciones.h"

static int Trabajo_idIncremental = 0;

void Trabajo_inicializar(Trabajo listaTrabajos[], int tam)
{
	int i;

		if (listaTrabajos != NULL && tam > 0)
		{
			for (i = 0; i < tam; i++)
			{
				listaTrabajos[i].isEmpty = VACIO;
			}
		}
}

int Trabajo_ObtenerID(void)
{
	return Trabajo_idIncremental += 1;
}

int Trabajo_ObtenerIndexLibre(Trabajo listaTrabajos[], int tam)
{
	int rtn = -1;
	int i;

	if (listaTrabajos != NULL && tam > 0)
	{
		for (i = 0; i < tam; i++) {
			if (listaTrabajos[i].isEmpty == VACIO)
			{
				rtn = i;
				break;
			}
		}
	}

	return rtn;
}

int Trabajo_Alta(Trabajo listaTrabajos[], int tam)
{
	int rtn = 0;
	Trabajo auxTrabajo;

	int index = Trabajo_ObtenerIndexLibre(listaTrabajos, tam);

	if (index != -1)
	{
		auxTrabajo = Trabajo_CargarDatos();
		auxTrabajo.idTrabajo = Trabajo_ObtenerID();
		auxTrabajo.isEmpty = OCUPADO;
		listaTrabajos[index] = auxTrabajo;

		rtn = 1;
	}

	return rtn;
}

Trabajo Trabajo_cargarDatos(void)
{
	Trabajo miTrabajo;



	return miTrabajo;
}
