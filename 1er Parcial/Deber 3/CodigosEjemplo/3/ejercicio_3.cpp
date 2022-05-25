/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio # (completar)
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 16/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
	https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

#include <iostream>
#include "Cadena.h"
#include <string.h>
#include <cstring>
using namespace std;


int main(int argc, char** argv) {
	Cadena C1('Juan') , C2('López');
     C1+C2;
     cout << "Atributo de C1 = " << C1.DameCadena() << endl;
	return 0;
}