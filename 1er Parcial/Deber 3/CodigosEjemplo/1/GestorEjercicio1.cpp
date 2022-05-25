/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio # 4 - Ejemplo de operador sobrecargado binario (+ y -) devuelve un objeto y permite definir expresiones
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 16/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

#include <iostream>
#include "Reloj.h"
using namespace std;

int main(int argc, char** argv) {
	Reloj R(10,59,56);
    for (int i=0; i<10; i++, ++R)
    cout <<setw(4)<< R.Hora() <<setw(4)<< R.Minuto() 
         <<setw(4)<< R.Segundo() << endl;
	return 0;
}