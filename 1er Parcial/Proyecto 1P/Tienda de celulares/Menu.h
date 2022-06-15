/***********************************************************************
 * Module:  Menu.cpp
 * Author:  Escobar David, Arias Xavier
 * Modified: jueves, 9 de junio de 2022 03:44:41 p. m.
 * Purpose: Implementation of the class Menu
 ***********************************************************************/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <windows.h>
#include <stdlib.h>

#include "Cola.h"
#include "Nodo.h"
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
 
   
   const char *titulo = "VENTA DE CELULARES";
   const char *opciones[] = {"Registrar venta de celular", "Mostrar ventas realizadas", "Generar reporte PDF", "Deshacer ultima venta", "Buscar venta","Ayuda","Salir del programa"};
   int n = 7;  
 
   do {
      opcion = menu(titulo, opciones, n);
		
		switch(opcion){
			case 1:
				system("cls");
				op1.
				break;
			case 2:
				system("cls");
				op1.consultarAtras();
				break;	
			case 3:
				system("cls");
				op1.consultarAdelante();
				break;
			case 7:
				cout<<"GRACIAS POR USAR EL SISTEMA"<<endl;
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

////////////////////////////////////////////////////////////////////////
// Name:       Menu::Marquesina()
// Purpose:    Implementation of Menu::Marquesina()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Marquesina(){
	int a=0, b=55, c=0, n=0;
	char t[35] ="Bienvenido a mi tiendita :D";
	do{
		for (a=1;a<=55;a++)
		{
			system("cls");
			gotoxy(a,1);
			cout<<t;
			Sleep (50);
			c++;
		}
		for (b=55;b>=1;b--)
		{
			system("cls");
			gotoxy(b,1);
			cout<<t;
			Sleep (50);
		}
	}while (c==4);
}
