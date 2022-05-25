/*
	Universidad de las Fuerzas Armadas "ESPE"
	Programa que realiza la conversion de Decimal a Binario y calcula el MCD de tres numeros
	Arias Xavier, Escobar David
	Fecha de creacion: 11/05/2022
	Fecha de modificacion: 12/05/2022
	Grupo 5
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/ 

#include <iostream>
#include "DecimalBinario.h"
#include "MCD.h"

int main(int argc, char** argv) {
int opc;
char *cad= new char[10];
do{
	system("cls");
	printf("\n\n\t\t\t - MENU -\n\n\n");
	printf("\t\t(1.) Decimal a Binario\n");
	printf("\t\t(2.) MCD de tres numeros\n");
	printf("\t\t(0.) Salir\n");
	printf("\t\t(?.) Escoja:  ");
	scanf("%d",&opc);
	switch(opc){
		case 1:{
			printf("\n\t\t- Decimal >>>>> Binario -");
			cad[0]='\0';
			decimalBinario(124,cad);
			printf("%s",cad);
			printf("\n\n");
			system("pause");
			break;
		}
		case 2:{
			printf("\n\t\t- MCD de varios numeros -");
			mcd();
			printf("\n\n");
			system("pause");
			break;
		}
		case 0:{
			printf("\n\t\tCerrando el programa...");
			printf("\n\n\n");
			system("pause");
			break;
		}
		default:{
			printf("\n\t\tOpcion NO valida\n\t\tIngreselo nuevamente.");
			printf("\n\n\n");
			system("pause");
			break;
		}	
	}
}while(opc!=0);
return 0;
}

