/*
	Universidad de las Fuerzas Armadas "ESPE"
	Programa que realiza la suma de diferente tipo de datos
	Arias Xavier, Escobar David
	Fecha de creacion: 11/05/2022
	Fecha de modificacion: 12/05/2022
	Grupo 5
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/
#include <iostream>
#include "cabecera.h"
#include "floatsuma.h"
#include "doublesuma.h"
#include "charsuma.h"
int main(int argc, char** argv) {

	printf("%d",suma(5));
	printf("\n%f",suma(6,5));
	printf("\n%.2lf",suma(6,8.8));
	printf("\n%s",suma(6,8,8));

	return 0;
}
