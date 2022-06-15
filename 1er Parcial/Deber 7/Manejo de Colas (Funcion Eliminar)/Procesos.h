/*
	*Universidad de las Fuerzas Armadas "ESPE"
	*Programa que realize las acciones basicas para el manejo de una pila (ELIMINAR)
	*Arias Xavier, Escobar David
	*Fecha de creacion: 13/06/2022
	*Fecha de modificacion: 014/06/2022
	*Grupo 5
	*https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

/***********************************************************************
 * Module: Procesos.h
 * Author:  Escobar David, Arias Xavier
 * Modified: martes, 14 de junio de 2022 06:44:41 p. m.
 * Purpose: Implementation of the class Procesos
 ***********************************************************************/

#include "Operaciones.h"
using namespace std;


struct nodo{
	int dato;
	nodo* siguiente;
} *primero;


////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::insertarNodo()
// Purpose:    Implementation of Procesos::insertarNodo()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	nuevo->siguiente = primero;
	primero = nuevo;
	cout << endl << " Nodo Ingresado " << endl << endl;
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::eliminarNodo()
// Purpose:    Implementation of Procesos::eliminarNodo()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual == primero){
					primero = primero->siguiente;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				cout << endl << " Nodo Eliminado" << endl << endl;
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado==false){
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}	
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::desplegarPila()
// Purpose:    Implementation of Procesos::desplegarPila()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::desplegarPila(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		while(actual!=NULL){
			cout << endl << " " << actual->dato; 
			actual = actual->siguiente;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}