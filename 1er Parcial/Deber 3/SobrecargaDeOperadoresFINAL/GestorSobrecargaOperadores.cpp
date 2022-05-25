/*
	Universidad de las Fuerzas Armadas "ESPE"
	Sobrecarga de operadores.
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 16/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

#include <iostream>
#include "Operador1.h"
#include "Operador2.h"
#include "Operador3.h"
#include "Operador4.h"

int main(int argc, char** argv) {
	int opc;
	do
	{
		system("cls");
		printf("\t\t\t\tMENU\n\n");
		printf("\t\t(1.) Sobrecarga del operador =\n");
		printf("\t\t(2.) Sobrecarga del operador +=\n");
		printf("\t\t(3.) Sobrecarga del operador ,\n");
		printf("\t\t(4.) Sobrecarga del operador |=\n");
		printf("\t\t(0.) Cerrar\n");
		printf("\t\t(?.) Escoja una opcion:	 ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:{
				float resultado;
				printf("\n\n\t\t====================*====================\n\n");
				printf("\t\t(1.) Sobrecarga del operador =\n\n");
				Operador1 Op1(4.5,6.3,3.5,8.9),R;
				//printf("Resultado: %f ",R.operator =(Op1));
				resultado=Op1.GetA()+Op1.GetB()-Op1.GetC()*Op1.GetD();
				printf("Resultado: %f", resultado);
				printf("\n\n\n");
				system("pause");
				
				break;
			}
			case 2:{
				int f;
				printf("\n\n\t\t====================*====================\n\n");
				printf("\t\t(2.) Sobrecarga del operador +=\n\n");
				Operador4 op4(10,5);
				f=op4.GetA()|op4.GetB();
			    printf("Resultado=%d",f);
				printf("\n\n\n");
				system("pause");
				break;
			}
			case 3:{
				printf("\n\n\t\t====================*====================\n\n");
				printf("\t\t(3.) Sobrecarga del operador ,\n\n");
				Operador3 Op3(1,-5,6),x1,x2;
                printf ("x1 = %lf\n", x1);
                printf ("x2 = %lf\n", x2);
                return 0;
				printf("\n\n\n");
				system("pause");
				break;
			}
			case 4:{
                int f;
				printf("\n\n\t\t====================*====================\n\n");
				printf("\t\t(4.) Sobrecarga del operador |=\n\n");
				Operador4 op4(13,3);
				f=op4.GetA()|op4.GetB();
				//op4.operator =();
				printf("\t2^7	2^6	2^5	2^4	2^3	2^2	2^1	2^0\n");
				printf("\t128	64	32	 16	 8	 4	 2	 1\n");
				printf("\t0	0	0	 0	 0	 0	 0	 1=13\n");
				printf("\t0	0	0	 0	 0	 0	 0	 1=3\n");
				printf("\n");
				printf("\n");
				printf(" &(AND)	  0		0	0	 0	 0	 0	 0	 1=1\n");
				printf("|=(OR)	  0		0	0	 1	 1	 1	 1	 1=15\n");
				printf("Resultado=%d",f);
				printf("\n\n\n");
				system("pause");
				break;
			}
			case 0:
			{
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
	}while (opc!=0);	
	return 0;
}
