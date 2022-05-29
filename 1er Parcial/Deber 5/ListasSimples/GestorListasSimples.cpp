/*
	Universidad de las Fuerzas Armadas "ESPE"
	Programa que realize las acciones basicas para el manejo de una lista simple
	Arias Xavier, Escobar David
	Fecha de creacion: 25/05/2022
	Fecha de modificacion: 25/05/2022
	Grupo 5
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

#include <iostream>
#include "Lista.h"
#include "Nodo.h"
using namespace std;
int main()
{
	int opc;
	Lista lst;
	do{
		system("cls");
		printf("\n\n\t\tGestion de Listas Simples\n");
		printf("\n\n\t\t\t - MENU -\n\n\n");
		printf("\t\t(1.) Ingreso de Datos\n");
		printf("\t\t(2.) Mostrar Datos\n");
		printf("\t\t(3.) Buscar en la Lista\n");
		printf("\t\t(4.) Eliminar Dato\n");
		printf("\t\t(5.) Sumar elementos de la Lista\n");
		printf("\t\t(0.) Salir\n");
		printf("\t\t(?.) Escoja:  ");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:{
				printf("\n");
				lst.ingreso();
				printf("\n\n");
				system("pause");
				break;
			}
			case 2:{
				printf("\n");
				lst.mostrar();
				printf("\n\n");
				system("pause");
				break;
			}
			case 3:{
				printf("\n");
				lst.buscar();
				printf("\n");
				printf("\n\n");
				system("pause");
				break;
			}
			case 4:{
				printf("\n");
				lst.eliminar(); 
				lst.mostrar();
				printf("\n\n");
				system("pause");
				break;
			}
			case 5:{
				printf("\n");
				lst.sumaLista();
				printf("\n\n");
				system("pause");
				break;
			}
			case 0:{
				printf("\n\t\tCerrando el programa...");
				printf("\n\n\n");
				system("pause");
				break;
			}
			default:{
				printf("\n\t\tOpcion NO valida\n\t\tIngreselo nuevamente.");
				printf("\n\n\n");
				system("pause");
				break;
			}
		}
	}while (opc!=0);
	return 0;
}