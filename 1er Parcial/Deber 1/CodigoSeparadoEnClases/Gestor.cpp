/*
	Universidad de las Fuerzas Armadas "ESPE"
	Programa que convierta datos de un tipo a otro
	Arias Xavier, Escobar David
	Fecha de creacion: 11/05/2022
	Fecha de modificacion: 12/05/2022
	Grupo 5
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/ 
#include <iostream>
#include "Calcular.cpp"
#include "Imprimir.cpp"

int main(int argc, char** argv) {
	int a=18,b=3;
	Cproceso *obj1=new Cproceso(a,b);
	Cproceso *obj2=new Cproceso(15,5);
	Cproceso *obj3=new Cproceso(0,0);
	obj3->racional(*obj1,*obj2);
	obj1->imprimirObj(*obj1);
	obj2->imprimirObj(*obj2);
	obj3->imprimirObj(*obj3);
	return 0;
}
