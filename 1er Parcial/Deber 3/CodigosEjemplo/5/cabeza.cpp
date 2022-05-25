/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio 8: Sobrecarga del operador ElementoVector []
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 16/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	Github: https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

#include <iostream>
#include "caa.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
{    A A1(2),A2(3),A3;
     cout << "Inicialmente : " << endl;
     cout << "A1 : " << A1.DameX()<< endl;
     cout << "A2 : " << A2.DameX()<< endl;
     cout << endl;
    
     A3 = ++A1;
     cout << "Como prefijo A3 = ++A1 : " << endl;
     cout << "A1 : " << A1.DameX()<< endl;
     cout << "A3 : " << A3.DameX()<< endl;

     A3 = A2++;
     cout << endl;
     cout << "Como sufijo A3 = A2++: " << endl;
     cout << "A2 : " << A2.DameX()<< endl;
     cout << "A3 : " << A3.DameX()<< endl;
}
	return 0;
}
