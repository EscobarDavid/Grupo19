/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio # 4 - Ejemplo de operador sobrecargado binario (+ y -) devuelve un objeto y permite definir expresiones
	Arias Xavier, Escobar David, Ram�rez Erick, Y�nez Michelle
	Fecha de creaci�n: 16/05/2022
	Fecha de modificaci�n: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

#include <iostream>
#include "Complejo.h"

using namespace std;

int main(int argc, char** argv) {
	Complejo A(1.5,2.3), B(5.2,4.7), C(1.1,0.4), D;
     D= A + B - C;
     cout << "D = " << D.DameR()<<" + "<< D.DameI() << "i"<< endl;
	return 0;
}