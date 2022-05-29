#include "Lista.h"
#include <iostream>

using namespace std;
////////////////////////////////////////////////////////
//Metodo para el constructor
////////////////////////////////////////////////////////
Lista::Lista() {
	this->primero = NULL;
	this->actual = NULL;
}

////////////////////////////////////////////////////////
//Metodo para ingresar un valor en las listas
////////////////////////////////////////////////////////
void Lista::ingreso() {
	int n;
	do
	{
		system("cls");
		cout << "\n\t\tIngrese el valor : ";
		cin >> n;
		insertar(n);
		cout<<"\n\t\tAgregado con exito.";
		cout <<"\n\t\tAgregar otro elemento? \n\t\t |SI-1|\n\t\t |NO-0|\n ";
		cout<<"\t\tEscoja: ";
		cin >> n;
	} while (n != 0);
}
////////////////////////////////////////////////////////
//Metodo insertar
////////////////////////////////////////////////////////
void Lista::insertar(int val) {
	Nodo* nuevo = new Nodo(val, NULL);
	if (listaVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->siguiente = nuevo;
	}
	this->actual = nuevo;
}

////////////////////////////////////////////////////////
//Metodo para mostrar los valores en pantalla
////////////////////////////////////////////////////////
void Lista::mostrar() {
	Nodo* tmp = this->primero;
	cout<<"\t\t";
	while (tmp) {	
		cout <<tmp->valor << "-->";
		tmp = tmp->siguiente;
	}
	cout << "NULL\n";
}

////////////////////////////////////////////////////////
//Metodo para buscar un valor en la lista simple
////////////////////////////////////////////////////////
void Lista::buscar() {
	int val;
	cout << "\n\t\tIngrese el valor a Buscar: ";
	cin >> val;
	int aux = 0;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	while (tmp)
	{
		if (tmp->valor == num->valor)
		{
			aux++;
		}
		tmp = tmp->siguiente;
	}
	if (aux == 0)
	{
		cout << "\t\tElemento NO existe en la lista";
	}
	else
	{
		cout << "\t\tElemento SI existe en la lista";
	}
}

////////////////////////////////////////////////////////
//Metodo para eliminar un valor en las listas
////////////////////////////////////////////////////////
void Lista::eliminar() {
	int val;
	cout << "\n\t\tQue numero desea eliminar?: ";
	cin >> val;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	Nodo* aux = tmp;
	Nodo* final = this->actual;
	aux = tmp;
	while (aux)
	{
		if (aux->valor == num->valor)
		{
			if (aux == tmp)
			{
				*tmp = *tmp->siguiente;
			}
			else {
				final->siguiente = aux->siguiente;
			}

		}
		final = aux;
		aux = aux->siguiente;
	}
}

////////////////////////////////////////////////////////
//Metodo para sumar valores dentro de la lista
////////////////////////////////////////////////////////
void Lista::sumaLista() {
	Nodo* tmp = this->primero;
	int valor=0;
	while (tmp) {
		valor += tmp->valor;
		tmp = tmp->siguiente;
	}
	cout << "\t\tLa suma de los elementos da: "<<valor<<endl;
}