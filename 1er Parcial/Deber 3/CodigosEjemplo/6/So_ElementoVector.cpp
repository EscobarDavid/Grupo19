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
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include "Clase_A.h"
#include "Clase_B.h"

using namespace std;

int main()
 { B Ob;

   cout << "Ingrese datos :" << endl;
   while (1)
    { int p;
      cin >> p;
      if (p<=0) break;
      Ob.Ingresa(p);
    }

    cout << "Datos le¡dos :" << endl;

   for (int i=0; i<Ob.DameCant(); i++)
     cout << Ob[i] << endl;
 }
