/***********************************************************************
 * Module:  Gestor.cpp
 * Author:  Escobar David, Arias Xavier
 * Modified: jueves, 9 de junio de 2022 03:44:41 p. m.
 * Purpose: Implementation of the class Gestor
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include "Menu.h"


using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Gestor::main()
// Purpose:    Implementation of Gestor::main()
// Return:     int
////////////////////////////////////////////////////////////////////////

int main(){
	char usuario[10]={};
	int verificar, contrasenia=1727;
	system("mode con: cols=55 lines=25");
	system("Color 87");
	Marquesina();
	cout<<"\n\n\t\tInicio de Sesion"<<endl;
	cout<<"\n\n\n\t\t>Usuario: ";
	cin>>usuario;                              
	do{
		cout<<"\n\t\t> Contrasenia: ";
		cin>>verificar;
		if(verificar==contrasenia){
			
			Menuu();
		} else {
			cout<<"\n\t\tContrasenia incorrecta";
			system("cls");
		}
	}while(verificar!=contrasenia);	
	return 0;	
}