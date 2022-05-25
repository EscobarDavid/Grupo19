/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio # 2 - Ejemplo sencillo de operador sobrecargado binario (*) devuelve sólo un número real.
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 16/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

#include <iostream>
#include "Vector.h"
using namespace std;

int main(int argc, char** argv) {
	Vector V1(10,20), V2(5,5);
     float p;

     p = V1*V2;

     cout << "P = " << p<< endl;	
	return 0;
}
