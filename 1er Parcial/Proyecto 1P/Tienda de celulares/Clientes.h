/***********************************************************************
 * Module:  Clientes.h
 * Author:  Escobar David, Arias Xavier
 * Modified: jueves, 9 de junio de 2022 03:44:41 p. m.
 * Purpose: Declaration of the class Clientes
 ***********************************************************************/

#include "Tarjeta.h"
#include "Cuenta.h"
class Clientes{
	public:
		char nombres[30];
		char apellidos[20];
		char cedula[20];
		int presupuesto;
		bool accesorio;
		bool tdc;
		tarjeta mitarjeta;
		cuenta pagar;
		class Clientes *siguiente;
		class Clientes *anterior;	
};

