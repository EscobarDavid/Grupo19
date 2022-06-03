#include "ListasDoblementeEnlazadas.h"
#include <iostream>
void menu()
{
	int opc;
	LinkedList ll;
	do
	{
		system("cls");
		printf("\n\n\t\t\t - MENU -\n\n\n");
		printf("\t\t(1.) Agregar nodo al inicio\n");
		printf("\t\t(2.) Agregar nodo al final\n");
		printf("\t\t(3.) Agregar nodo entre la lista\n");
		printf("\t\t(4.) Eliminar nodo al inicio\n");
		printf("\t\t(5.) Eliminar nodo al final\n");
		printf("\t\t(6.) Eliminar nodo entre la lista\n");
		printf("\t\t(7.) Buscar \n");
		printf("\t\t(8.) Imprimir \n");
		printf("\t\t(0.) Salir\n");
		printf("\t\t(?.) Escoja:  ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:{
				printf("\n\t\t- Agregar nodo al inicio -\n");
				int valor;
				cout<<"Ingrese el valor: ";
				cin>>valor;
				ll.addFront(valor);
				printf("\n\n");
				system("pause");
				break;
			}
			case 2:{
				printf("\n\t\t- Agregar nodo al final -\n");
				int valor;
				cout<<"Ingrese el valor: ";
				cin>>valor;
				ll.addBack(valor);
				printf("\n\n");
				system("pause");
				break;
			}
			case 3:{
				printf("\n\t\t- Agregar nodo entre la lista -\n");
				
				printf("\n\n");
				system("pause");
				break;
			}
			case 4:{
				printf("\n\t\t- Eliminar nodo al inicio -\n");
				ll.removeFront();
				printf("\n\n");
				system("pause");
				break;
			}
			case 5:{
				printf("\n\t\t- Eliminar nodo al final -\n");
				ll.removeBack();
				printf("\n\n");
				system("pause");
				break;
			}
			case 6:{
				printf("\n\t\t- Eliminar nodo entre la lista -\n");
				
				printf("\n\n");
				system("pause");
				break;
			}
			case 7:{
				printf("\n\t\t- Buscar -\n");
				ll.buscar();
				printf("\n\n");
				system("pause");
				break;
			}
			case 8:{
				printf("\n\t\t- Imprimir -\n");
				ll.printForward();
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
}

