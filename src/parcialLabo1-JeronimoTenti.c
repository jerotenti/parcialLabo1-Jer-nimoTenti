/*
 ============================================================================
 Name        : parcialLabo1-JeronimoTenti.c
 Author      : Tenti Villarreal Jerónimo
 ============================================================================
 */

#include "funciones.h"

#define TAM_SERVICIO 4
#define TAM_TRABAJO 3

int main(void)
{
	setbuf(stdout, NULL);

	Servicio listaDeServicios[TAM_SERVICIO] = {{1, "limpieza", 250}, {2, "parche", 300}, {3, "centrado", 400}, {4, "cadena", 350}};
	Trabajo listaDeTrabajos[TAM_TRABAJO];

	Trabajo_inicializar(listaDeTrabajos, TAM_TRABAJO);

	do {
			//MENU PRINT
			//Menu();
			printf("INGRESE OPCION: ");
			scanf("%d", &opc);

			//MENU SWITCH
			switch (opc)
			{
			case 0:
				/** PREGUNTAR SI DESEA SALIR */
				opc = 0;
				break;
			case 1:
				//ALTA
				if (eProducto_Alta(Producto, TAM_ESTRUCTURA)) {
					puts(" * Producto DADO DE ALTA EXITOSAMENTE");
				} else {
					puts(" * ERROR. SIN ESPACIO PARA ALMACENAR MAS Producto");
				}
				system("pause");
				break;
			case 2:
				//BAJA
				if (eProducto_Baja(Producto, TAM_ESTRUCTURA)) {
					puts("\n * BAJA DE Producto EXITOSA");
					eProducto_MostrarTodos(Producto, TAM_ESTRUCTURA);
				} else {
					puts("\n * BAJA DE Producto CANCELADA");
				}
				system("pause");
				break;
			case 3:
				//MODIFICACION
				if (eProducto_Modificacion(Producto, TAM_ESTRUCTURA)) {
					puts("\n * MODIFICACION DE Producto EXITOSA\n");
					eProducto_MostrarTodos(Producto, TAM_ESTRUCTURA);
				} else {
					puts("\n * MODIFICACION DE Producto CANCELADA");
				}
				system("pause");
				break;
			case 4:
				//LISTADO Producto
				if(eProducto_MostrarTodos(Producto, TAM_ESTRUCTURA)){
					system("pause");
				}else{
					puts("No hay nada para mostrar pa");
				}

				break;
			case 5:
				//ORDENAR Producto
				criterioDeOrdenamiento = -1; //PEDIR CRITERIO DE ORDENAMIENTO
				eProducto_Sort(Producto, TAM_ESTRUCTURA, criterioDeOrdenamiento);
				system("pause");
				break;
			}
		} while (opc != 0);

		puts("\n... FIN PROGRAMA");

		return 0;
}
