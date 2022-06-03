/* Practica de Listas Doblemente Enlazadas*/

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;


////////////////////////////////////////////////////////////////
//Constructor vacio
////////////////////////////////////////////////////////////////
LinkedList::LinkedList(){
	header= new Node; //Creacion de nodos
	trailer= new Node;
	header->next=trailer;//Punteros apuntandose entre si
	trailer->prev=header;
	header->prev=NULL; //nodos centinelas
	trailer->next=NULL;
} 
////////////////////////////////////////////////////////////////
//Destructor para el manejo de memoria dinamica
////////////////////////////////////////////////////////////////
LinkedList::~LinkedList(){
	while(header->next!=trailer){
		removeFront();
	}	
	delete header;
	delete trailer;
}
////////////////////////////////////////////////////////////////
//Nos devolvera el dato del 1er nodo
////////////////////////////////////////////////////////////////
int LinkedList::getFront() const{
	return trailer->prev->dato;
}
////////////////////////////////////////////////////////////////
//Nos devolvera el dato del ultimo nodo
////////////////////////////////////////////////////////////////
int LinkedList::getBack() const
{
	return header->next->dato;
}
////////////////////////////////////////////////////////////////
//Agregar dato al inicio de la lista
////////////////////////////////////////////////////////////////
void LinkedList::addFront(int dt){
	Node *nd = new Node;
	nd->dato = dt;
	nd->prev = header;
	nd->next = header->next;
	//Cambio de punteros
	header->next->prev=nd;
	header->next=nd;
}
////////////////////////////////////////////////////////////////
//Agregar dato al final de la lista
////////////////////////////////////////////////////////////////
void LinkedList::addBack(int dt){
	Node *nd = new Node;
	nd->dato = dt;
	nd->prev = trailer->prev;
	nd->next = trailer;
	//Cambio de punteros
	trailer->prev->next=nd;
	trailer->prev=nd;
	
}
////////////////////////////////////////////////////////////////
//Eliminar datos del 1er Nodo
////////////////////////////////////////////////////////////////
void LinkedList::removeFront(){
	//Guardar el siguiente Nodo
	Node *nd=header->next->next;
	//Eliminarlo
	delete header->next;
	//Actualizar punteros
	header->next=nd;
	nd->prev=header;
}
////////////////////////////////////////////////////////////////
//Eliminar datos del ultimo Nodo
////////////////////////////////////////////////////////////////
void LinkedList::removeBack(){
	//Guardar el anterior Nodo
	Node *nd=trailer->prev->prev;
	//Eliminarlo
	delete trailer->prev;
	//Actualizar punteros
	trailer->prev=nd;
	nd->next=trailer;
}
////////////////////////////////////////////////////////////////
//Imprimir datos desde el ultimo al inicio
//////////////////////////////////////////////////////////////// 
void LinkedList::printReverse(){
	Node *nd=trailer->prev;
	while(nd!=header)
	{
		cout<<nd->dato<<" ";
		nd=nd->prev;
	}		 
} 
////////////////////////////////////////////////////////////////
//Imprimir datos desde el inicio al ultimo
////////////////////////////////////////////////////////////////
void LinkedList::printForward(){
	Node *nd=header->next;
	while(nd!=trailer)
	{
		cout<<nd->dato<<" ";
		nd=nd->next;
	}
}
