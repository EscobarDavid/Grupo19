/*
	*Universidad de las Fuerzas Armadas "ESPE"
	*Programa que realize las acciones basicas para el manejo de una cola (ELIMINAR)
	*Arias Xavier, Escobar David
	*Fecha de creacion: 13/06/2022
	*Fecha de modificacion: 014/06/2022
	*Grupo 5
	*https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

/***********************************************************************
 * Module:  Menu.h
 * Author:  Escobar David, Arias Xavier
 * Modified: martes, 14 de junio de 2022 06:44:41 p. m.
 * Purpose: Implementation of the class Menu
 ***********************************************************************/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <windows.h>
#include <stdlib.h>


#include "Procesos.h"
#include "Win.h"

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define TECLA_ENTER 13

using namespace std;
void Menuu();
int menu(const char *titulo, const char *opciones[], int n);

////////////////////////////////////////////////////////////////////////
// Name:       Menu::Menuu()
// Purpose:    Implementation of Menu::Menuu()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Menuu(){
	
	Operaciones op1;
	bool repite = true;
	int opcion;   
 
   
   const char *titulo = "-* Gestion de Colas *-";
   const char *opciones[] = {"Agregar nodos", "Eliminar nodos", "Mostrar datos en cola","Salir del programa"};
   int n = 4;  
 
   do {
      opcion = menu(titulo, opciones, n);
		
		switch(opcion){
			case 1:
				system("cls");
				op1.insertarNodo();
				break;
			case 2:
				system("cls");
				op1.eliminarNodo();
				break;	
			case 3:
				system("cls");
				op1.desplegarPila();				
				break;

			case 4:
				cout<<"Cerrando el programa"<<endl;
				repite=false;
				break;								
	}
	system("pause");
	}while(repite);
}

////////////////////////////////////////////////////////////////////////
// Name:       Menu::menu(char titulo, char opciones)
// Purpose:    Implementation of Menu::menu()
// Parameters:
// - titulo
// - opciones
// Return:     int
////////////////////////////////////////////////////////////////////////
int menu(const char titulo[], const char *opciones[], int n)
{
   int opcionSeleccionada = 1;  
 
   int tecla;
 
   bool repite = true; 
 
   do {
      system("cls");
      system("Color 8B");
      gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;
 
      
      gotoxy(15, 2); cout << titulo;
 
      
      for (int i = 0; i < n; ++i) {
         gotoxy(10, 4 + i); cout <<"["<< i + 1 << "] | " << opciones[i];
      }
 
      
 
      do {
         tecla = getch();
         
      } while (tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != TECLA_ENTER);
 
      switch (tecla) {
 
         case TECLA_ARRIBA:   
 
            opcionSeleccionada--;
 
            if (opcionSeleccionada < 1) {
               opcionSeleccionada = n;
            }
 
            break;
 
         case TECLA_ABAJO:
            opcionSeleccionada++;
 
            if (opcionSeleccionada > n) {
               opcionSeleccionada = 1;
            }
 
            break;
 
         case TECLA_ENTER:
            repite = false;
            break;
      }
 
   } while (repite);
 
   return opcionSeleccionada;
}
