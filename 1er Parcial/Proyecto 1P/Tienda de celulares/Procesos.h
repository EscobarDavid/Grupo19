/***********************************************************************
 * Module:  Procesos.cpp
 * Author:  Escobar David, Arias Xavier
 * Modified: jueves, 9 de junio de 2022 03:44:41 p. m.
 * Purpose: Implementation of the class Procesos
 ***********************************************************************/

#include "Operaciones.h"
#include <ctype.h>
#include <fstream>
#define BAJA 300
#define MEDIA 400
#define ALTA 900
#define ACCESORIO 50

using namespace std;
int copy_file(char* f_org,char* f_dest);
class Clientes *LISTA=NULL;
int sw=0,validandoL,validandoI;


////////////////////////////////////////////////////////////////////////
// Name:       Procesos::validarCadenas(char cadena)
// Purpose:    Implementation of Procesos::validarCadenas()
// Parameters:
// - cadena
// Return:     int
////////////////////////////////////////////////////////////////////////
int Operaciones::validarCadenas(char cadena[50]){
	int i=0, validandoL=0, j;
	j=strlen(cadena);
	while(i<j&&validandoL==0){

		if(isalpha(cadena[i])!=0||cadena[i]==32)
		{
			i++;
		}else{
			validandoL=1;
		}
	}
 return validandoL;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::validarNum(char numero)
// Purpose:    Implementation of Procesos::validarNum()
// Parameters:
// - numero
// Return:     int
////////////////////////////////////////////////////////////////////////

int Operaciones::validarNum(char numero[10]){

	int i=0,sw=0,j;
	j=strlen(numero);

	while(i<j &&sw==0){
		if(isdigit(numero[i])!=0){
			i++;
		}else{
			sw=1;
		}
	}
	return sw;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::minuscula(char cadena)
// Purpose:    Implementation of Procesos::minuscula()
// Parameters:
// - cadena
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::minuscula(char *cadena){
   int largo;
   largo = strlen(cadena);
   for (int i=0; i<largo; i++)
     cadena[i]=tolower(cadena[i]) ;
   return;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::buscar()
// Purpose:    Implementation of Procesos::buscar()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::buscar(void){

	class Clientes *copia=LISTA;
	char opcionBuscar[2];
	int convertir;

		if(copia==NULL){
			cout<<"\t\t NO HAY VENTAS REGISTRADAS"<<endl;
			return;
		}

		cout << "\t\t-------------------------" << endl;
		cout << "\t\t|	Busqueda de Ventas	 |" << endl;
		cout << "\t\t-------------------------" << endl;
		cout<<"\n\n";

		cout<<"\t\t-----------------------------" << endl;
		cout<<"\tPor:" << endl;
		cout<<"\tNombre				\t[1]"<<endl;
		cout<<"\tApellido			\t[2]"<<endl;
		cout<<"\tGama del celular	\t[3]"<<endl;
		cout<<"\tForma de pago		\t[4]"<<endl;
		cout<<"\t-----------------------------" << endl;
		cout<<"\tEscoja:";
		cin>>opcionBuscar;

		int sw=0;
		sw=validarNum(opcionBuscar);
		if(sw!=0){
				cout<<"\t\tINGRESE NUMERO 1-4";
		}


		convertir = atoi(opcionBuscar);

		system("cls");
		switch(convertir){
			case 1:
					char nombre[30];
					char resp;
					do{
						cout << "\t\t\t--------------------------" << endl;
						cout << "\t\t      -*Ventas Realizadas*-     " << endl;
						cout << "\t\t\t--------------------------" << endl;
						cout<<"\tNombre: ";
						fflush(stdin);
						cin.getline(nombre,30);
						fflush(stdin);
						minuscula(nombre);
						do{
						if(strcmp(copia->nombres,nombre)==0){
							cout<<endl;
							cout<<"\tNombres: "<<copia->nombres<<endl;
							cout<<"\tApellidos: "<<copia->apellidos<<endl;
							cout<<"\tCedula: "<<copia->cedula<<endl;
							cout<<"\tGama del celular: "<<copia->presupuesto<<endl;
							cout<<"\tAccesorio extra: [1]SI [0]N0: "<<copia->accesorio<<endl;
							cout<<"\tForma de pago: [1]SI [0]N0: "<<copia->tdc<<endl;
							if(copia->tdc==1){
							cout<<"\tBanco: "<<copia->mitarjeta.bancos<<endl;
							cout<<"\tTipo de tarjeta: "<<copia->mitarjeta.tipoTarjeta<<endl;
							}
							cout<<"\t*********************************" << endl;
						}
						copia=copia->siguiente;
						}while(copia!=LISTA);
						cout<<"\t\tVOLVER A BUSCAR POR NOMBRE? S/N: "; cin>>resp;
						system("cls");
					}while(resp=='s'||resp=='S');
					return;
					break;

			case 2:

					char apellidos[20];

					do{
						cout << "\t\t\t--------------------------" << endl;
						cout << "\t\t     -*Ventas Realizadas*-     " << endl;
						cout << "\t\t\t--------------------------" << endl;
						cout<<"\tApellido: ";
						fflush(stdin);
						cin.getline(apellidos,20);
						fflush(stdin);
						minuscula(apellidos);
						do{
						if(strcmp(copia->apellidos,apellidos)==0||strcmp(copia->cedula,apellidos)==0){
							cout<<endl;
							cout<<"\tNombres: "<<copia->nombres<<endl;
							cout<<"\tApellidos: "<<copia->apellidos<<endl;
							cout<<"\tCedula: "<<copia->cedula<<endl;
							cout<<"\tGama del celular: "<<copia->presupuesto<<endl;
							cout<<"\tAccesorio extra: [1]SI [0]N0: "<<copia->accesorio<<endl;
							cout<<"\tForma de pago: [1]SI [0]N0: "<<copia->tdc<<endl;
							if(copia->tdc==1){
							cout<<"\tBanco: "<<copia->mitarjeta.bancos<<endl;
							cout<<"\tTipo de tarjeta: "<<copia->mitarjeta.tipoTarjeta<<endl;
							}
							cout<<"\t*********************************" << endl;
							}

							copia=copia->siguiente;
						}while(copia!=LISTA);

						cout<<"\t\tVOLVER A BUSCAR POR APELLIDO? S/N: "; cin>>resp;
						system("cls");
					}while(resp=='s'||resp=='S');
					return;
					break;

			case 3:

					int tipo;
					do{

					cout << "\t\t\t--------------------------" << endl;
					cout << "\t\t     -*Ventas Realizadas*-     " << endl;
					cout << "\t\t\t--------------------------" << endl;
					do{
					cout<<"\tGama del celular: ";cin>>tipo;
					}while(tipo<1||tipo>3);
					do{
					if(copia->presupuesto==tipo){
						cout<<endl;
							cout<<"\tNombres: "<<copia->nombres<<endl;
							cout<<"\tApellidos: "<<copia->apellidos<<endl;
							cout<<"\tCedula: "<<copia->cedula<<endl;
							cout<<"\tGama del celular: "<<copia->presupuesto<<endl;
							cout<<"\tAccesorio extra: [1]SI [0]N0: "<<copia->accesorio<<endl;
							cout<<"\tForma de pago: [1]SI [0]N0: "<<copia->tdc<<endl;
							if(copia->tdc==1){
							cout<<"\tBanco: "<<copia->mitarjeta.bancos<<endl;
							cout<<"\tTipo de tarjeta: "<<copia->mitarjeta.tipoTarjeta<<endl;
							}
							cout<<"\t*********************************" << endl;
						}else{
							cout<<"\t\tNO HAY REGISTROS DE ESTE TIPO"<<endl;
						}
						copia=copia->siguiente;
					}while(copia!=LISTA);

					cout<<"\t\tVOLVER A BUSCAR POR TIPO? s/S: "; cin>>resp;
					system("cls");
					}while(resp=='s'||resp=='S');
					return;
					break;

			case 4:
					    cout <<"\t\t\t----------------------------" << endl;
						cout << "\t\t     -*Ventas Realizadas*-     " << endl;
						cout <<"\t\t\t----------------------------" << endl;
					do{
					if(copia->tdc==1){
						cout<<endl;
							cout<<"\tNombres: "<<copia->nombres<<endl;
							cout<<"\tApellidos: "<<copia->apellidos<<endl;
							cout<<"\tCedula: "<<copia->cedula<<endl;
							cout<<"\tGama del celular: "<<copia->presupuesto<<endl;
							cout<<"\tAccesorio extra: [1]SI [0]N0: "<<copia->accesorio<<endl;
							cout<<"\tForma de pago: [1]SI [0]N0: "<<copia->tdc<<endl;
							if(copia->tdc==1){
							cout<<"\tBanco: "<<copia->mitarjeta.bancos<<endl;
							cout<<"\tTipo de tarjeta: "<<copia->mitarjeta.tipoTarjeta<<endl;
							}
							cout<<"\t*********************************" << endl;
					}
					copia=copia->siguiente;
					}while(copia!=LISTA);
					return;
					break;

					default:
						cout<<"\t\tOPCION NO VALIDA"<<endl;

		}

}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::eliminar()
// Purpose:    Implementation of Procesos::eliminar()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::eliminar(void){

	class Clientes *borrar=LISTA;
	char resp;


	if ( borrar == NULL ) {
		cout << "\t\tNO HAY CLIENTES REGISTRADOS" << endl;
		return;
	}


	if ( LISTA == LISTA->siguiente) {
	cout << "\t\t---------------------------" << endl;
	cout << "\t\t|		Cancelar Venta		|" << endl;
	cout << "\t\t---------------------------" << endl;
	cout<<"\n\n";

	cout<<"\t|Nombre: "<<borrar->nombres<<endl;
	cout<<"\t|Apellido: "<<borrar->apellidos<<endl;
	cout<<"\t|CI: "<<borrar->cedula<<endl;
	cout<<"\t|Gama: "<<borrar->presupuesto<<endl;
	cout<<"\t|[1]Baja\t\t |$550"<<endl;
	cout<<"\t|[2]Media\t\t|$220"<<endl;
	cout<<"\t|[3]Alta\t\t |$900"<<endl;
	cout<<"\t|Accesorios extras (1-SI 0-N0):"<<borrar->accesorio<<endl;
	cout<<"\t|Pago en tarjeta (1-SI 0-N0):"<<borrar->tdc<<endl;
	cout<<"\t********************************" << endl;

    cout<<"\tConfirmara la cancelacion de la venta? (S/N): ";

      if ( resp=='S' || resp=='s') {
      	 LISTA=NULL;
      	 free(borrar);
      	 cout <<"\t\tREGISTRO ELIMINADO..." << endl;
      	 system("pause");
	  }
	  return;
	}


	do {
	cout << "\t\t---------------------------" << endl;
	cout << "\t\t|		Cancelar Venta		|" << endl;
	cout << "\t\t---------------------------" << endl;
	cout<<"\n\n";

	cout<<"\t|Nombre: "<<borrar->nombres<<endl;
	cout<<"\t|Apellido: "<<borrar->apellidos<<endl;
	cout<<"\t|CI: "<<borrar->cedula<<endl;
	cout<<"\t|Gama: "<<borrar->presupuesto<<endl;
	cout<<"\t|[1]Baja\t\t |$550"<<endl;
	cout<<"\t|[2]Media\t\t|$220"<<endl;
	cout<<"\t|[3]Alta\t\t |$900"<<endl;
	cout<<"\t|Accesorios extras (1-SI 0-N0):"<<borrar->accesorio<<endl;
	cout<<"\t|Pago en tarjeta (1-SI 0-N0):"<<borrar->tdc<<endl;
	cout<<"\t********************************" << endl;

    cout<<"\tConfirmara la cancelacion de la venta? (S/N): ";
	cin >> resp;
      if ( resp=='S' || resp=='s')
	  	{
	         while ( LISTA->siguiente != borrar ) {
	              LISTA=LISTA->siguiente;
	         }
	         LISTA->siguiente = LISTA->siguiente->siguiente;
	         LISTA->siguiente->siguiente->anterior = LISTA;
	         free(borrar);
	         cout <<"\t\tREGISTRO ELIMINADO" << endl;
	         return;
	  	}
	  borrar=borrar->siguiente;
	} while ( LISTA != borrar);
	cout << "\t\tTODOS LOS CLIENTES FUERON MOSTRADOS..." << endl;
	return;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::consultaAdelante()
// Purpose:    Implementation of Procesos::consultaAdelante()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::consultarAdelante(void){


	class Clientes *copia=LISTA;


	if ( copia == NULL ) {
		cout << "\t\tNO HAY CLIENTES REGISTRADOS" << endl;
		return;
	}


	cout << "\t\t--------------------------" << endl;
	cout << "\t\t|     Ventas realizadas   |" << endl;
	cout << "\t\t--------------------------" << endl;
	do {
	cout<<endl;
	cout<<"\t\t--------------------------------------------"<<endl;
	cout<<"\t\tNombres: "<<copia->nombres<<endl;
	cout<<"\t\tApellido: "<<copia->apellidos<<endl;
	cout<<"\tCI: "<<copia->cedula<<endl;

	cout<<endl;
	if(copia->presupuesto==1){
		cout<<"\tGama: Baja"<<endl;
	}else{
		if(copia->presupuesto==2){
			cout<<"\tGama: Media"<<endl;
		}else{
				cout<<"\tGama: Alta"<<endl;
		}
	}

	if(copia->accesorio==1){
	cout<<"\tAccesorio: Incluido"<<endl;
	}else{
		cout<<"\tAccesorio: No incluido"<<endl;
	}
		if(copia->tdc==1){
		cout<<"\tMetodo de pago: Tarjeta"<<endl;
		cout<<"\tBanco:"<<copia->mitarjeta.bancos<<endl;
		cout<<"\tTipo:"<<copia->mitarjeta.tipoTarjeta<<endl;
	}else{
		cout<<"\tMetodo de pago: Efectivo"<<endl;
	}
	cout<<"\t--------------------------------------------"<<endl;
    copia=copia->siguiente;
	} while( copia != LISTA);
	if(!copy_file("C:/Users/USUARIO/Desktop/Archivos Generados/datos.txt","C:/Users/USUARIO/Desktop/Archivos Generados/datos.pdf"))
                printf("Fichero copiado exitosamente\n");
	else
	        printf("PDF GENERADO EXITOSAMENTE\n");

	return;
}

////////////////////////////////////////////////////////////////////////
// Name:       Procesos::consultaAtras()
// Purpose:    Implementation of Procesos::consultaAtras()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::consultarAtras(void){

	class Clientes *copia=LISTA;

	if ( copia == NULL ) {
		cout << "\t\tNO HAY CLIENTES REGISTRADOS" << endl;
		return;
	}

	cout << "\t\t--------------------------" << endl;
	cout << "\t\t|    Ventas realizadas   |" << endl;
	cout << "\t\t--------------------------" << endl;
	do {
	cout<<endl;
	cout<<"\t*--------------------------------------*"<<endl;
	cout<<"\tNombres: "<<copia->nombres<<endl;
	cout<<"\tApellido: "<<copia->apellidos<<endl;
	cout<<"\tCI: "<<copia->cedula<<endl;

	cout<<"\tPresupuesto: "<<copia->pagar.presupuesto;

	cout<<endl;
	if(copia->presupuesto==1){
		cout<<"\tGama: Baja"<<endl;
	}else{
		if(copia->presupuesto==2){
			cout<<"\tGama: Media"<<endl;
		}else{
				cout<<"\tGama: Alta"<<endl;
		}
	}

	if(copia->accesorio==1){
	cout<<"\tAccesorio: Incluido"<<endl;
	}else{
		cout<<"\tAccesorio: No incluido"<<endl;
	}
		if(copia->tdc==1){
		cout<<"\tMetodo de pago: Tarjeta"<<endl;
		cout<<"\tBanco:"<<copia->mitarjeta.bancos<<endl;
		cout<<"\tTipo:"<<copia->mitarjeta.tipoTarjeta<<endl;
	}else{
		cout<<"\tMetodo de pago: Efectivo"<<endl;
	}
	cout<<"\t--------------------------------------------"<<endl;
    copia=copia->anterior;
	} while( copia != LISTA);
	return;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::agregar()
// Purpose:    Implementation of Procesos::agregar()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operaciones::agregar(void){


	ofstream apArchivo;
	apArchivo.open("C:/Users/USUARIO/Desktop/Archivos Generados/datos.txt", ios::app);
    if ( ! apArchivo ) {
        cout << "Problema al abrir archivo --> datos.txt" <<endl;
        return ;
    }

	class Clientes *nuevo;
	int i=0;

	nuevo=new(Clientes);

	if(nuevo==NULL){
		cout<<"\t\t\tNO HAY MEMORIA SUFICIENTE"<<endl;
		return;
	}


	cout<<"\n\n\t\t-*Registrar venta de celular*-"<<endl;

	cout<<endl;

	do{
	cin.clear();
	fflush(stdin);
	cout<<"\tNombre del cliente: ";
	cin.getline(nuevo->nombres,30);
	minuscula(nuevo->nombres);
	validandoL=validarCadenas(nuevo->nombres);
	}while(validandoL!=0);

	do{
	cin.clear();
	fflush(stdin);
	cout<<"\tApellido del cliente: ";
	cin.getline(nuevo->apellidos,20);
	minuscula(nuevo->apellidos);
	validandoL=validarCadenas(nuevo->apellidos);
	}while(validandoL!=0);


	cin.clear();
	fflush(stdin);
	cout<<"\tCedula: ";
	cin.getline(nuevo->cedula,20);
	fflush(stdin);
	minuscula(nuevo->cedula);


	do{
	cin.clear();
    fflush(stdin);
	cout<<"\tPresupuesto: ";
	cin>>nuevo->pagar.presupuesto;
	if(nuevo->pagar.presupuesto<300){
	cout<<"\tLo sentimos, no disponemos"<<endl;
	cout<<"\tde celulares mas baratos :("<<endl;
	}
	}while(nuevo->pagar.presupuesto<300);

	do{
	cin.clear();
	fflush(stdin);
	cout<<"\t*----------------------------------*\n";
	cout<<"\tGama"<<endl;
	cout<<"\t[1]Baja \t\t$300-$399"<<endl;
	cout<<"\t[2]Media\t\t$400-$899"<<endl;
	cout<<"\t[3]Alta \t\t$900 en adelante	"<<endl;
	cout<<"\t*----------------------------------*\n";
	cout<<"\tSu presupuesto:  ";
	cin>>nuevo->presupuesto;
	if(nuevo->presupuesto<1||nuevo->presupuesto>3||cin.fail()){
	cout<<"\tPorfavor, ingrese datos correctos"<<endl;
	}
	}while(nuevo->presupuesto<1||nuevo->presupuesto>3||cin.fail());

	do{
	cin.clear();
	fflush(stdin);
	cout<<"\tDesea agregar el kit (Case + Mica)?"<<endl;
	cout<<"\t[1]SI\n\t[0]N0";
	cout<<"\n\tSu eleccion:  ";
	cin>>nuevo->accesorio;
	if(nuevo->accesorio>1||nuevo->accesorio<0||cin.fail()){
	cout<<"\tPorfavor, ingrese datos correctos"<<endl;
	}
	}while(nuevo->accesorio<0||nuevo->accesorio>1||cin.fail());

	do{
	cin.clear();
	fflush(stdin);
	cout<<"\tMetodo de pago:"<<endl;
	cout<<"\tTarjeta de credito [1] \n\tEfectivo [0]";
	cout<<"\n\tSeleccione su metodo de pago: ";
	cin>>nuevo->tdc;
	if(nuevo->tdc>1||nuevo->tdc<0||cin.fail()){
	cout<<"\tPorfavor, ingrese datos correctos"<<endl;
	}
	}while(nuevo->tdc<0||nuevo->tdc>1||cin.fail());
	if(nuevo->tdc==1){
		do{
		cout<<"\t*------------------------------*\n";
		cout<<"\t\t\tBANCO"<<endl;
		cout<<"\tBco. Austro   \t\t[B]"<<endl;
		cout<<"\tBco. Guayaquil\t\t[G]"<<endl;
		cout<<"\tBco. Pichincha\t\t[P]"<<endl;
		cout<<"\t*------------------------------* ";
		cout<<"\n\tSeleccione su banco: ";
		cin>>nuevo->mitarjeta.bancos;

		}while(nuevo->mitarjeta.bancos!='B'&&nuevo->mitarjeta.bancos!='b'&&nuevo->mitarjeta.bancos!='G'&&nuevo->mitarjeta.bancos!='g'&&nuevo->mitarjeta.bancos!='P'&&nuevo->mitarjeta.bancos!='p');

		do{
		cout<<"\tTipo de tarjeta:"<<endl;
		cout<<"\t[C]Credito \n\t[D]Debito"<<endl;
		cout<<"\n\tSeleccione su tipo de tarjeta: ";
		cin>>nuevo->mitarjeta.tipoTarjeta;
		}while(nuevo->mitarjeta.tipoTarjeta!='c'&&nuevo->mitarjeta.tipoTarjeta!='C'&&nuevo->mitarjeta.tipoTarjeta!='d'&&nuevo->mitarjeta.tipoTarjeta!='D');
		}


		if(nuevo->presupuesto==1&&nuevo->accesorio==1){
		nuevo->pagar.accesorio=ACCESORIO*nuevo->pagar.presupuesto;
		nuevo->pagar.iva=(nuevo->pagar.presupuesto*BAJA)*.16;
		nuevo->pagar.subtotal=nuevo->pagar.presupuesto*BAJA;
		nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal)+nuevo->pagar.accesorio;
		cout<<endl;

		cout<<"\t*------------------------------*\n ";
		cout<<"\t ********* Su Factura ********* "<<endl;
		cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
		cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
		cout<<"\t Extras:"<<	nuevo->pagar.accesorio<<endl;
		cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
		cout<<"\t*------------------------------* ";
		}else{
			if(nuevo->presupuesto==1&&nuevo->accesorio==0){
					nuevo->pagar.iva=(nuevo->pagar.presupuesto*BAJA)*.16;
					nuevo->pagar.subtotal=nuevo->pagar.presupuesto*BAJA;
					nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal);
					cout<<endl;
					cout<<"\t*------------------------------*\n ";
					cout<<"\t ********* Su Factura ********* "<<endl;
					cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
					cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
					cout<<"\t Extras:"<<	nuevo->pagar.accesorio<<endl;
					cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
					cout<<"\t*------------------------------* ";
			}
		}
		if(nuevo->presupuesto==2&&nuevo->accesorio==1){
		nuevo->pagar.accesorio=ACCESORIO*nuevo->pagar.presupuesto;
		nuevo->pagar.iva=(nuevo->pagar.presupuesto*MEDIA)*.16;
		nuevo->pagar.subtotal=nuevo->pagar.presupuesto*MEDIA;
		nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal)+nuevo->pagar.accesorio;
		cout<<endl;
		cout<<"\t*------------------------------*\n ";
		cout<<"\t ********* Su Factura ********* "<<endl;
		cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
		cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
		cout<<"\t Extras:"<<	nuevo->pagar.accesorio<<endl;
		cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
		cout<<"\t*------------------------------* ";
		}else{
			if(nuevo->presupuesto==2&&nuevo->accesorio==0){
					nuevo->pagar.iva=(nuevo->pagar.presupuesto*MEDIA)*.16;
					nuevo->pagar.subtotal=nuevo->pagar.presupuesto*MEDIA;
					nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal);
						cout<<endl;
						cout<<"\t*------------------------------*\n ";
						cout<<"\t ********* Su Factura ********* "<<endl;
						cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
						cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
						cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
						cout<<"\t*------------------------------* ";
			}
		}
		if(nuevo->presupuesto==3&&nuevo->accesorio==1){
		nuevo->pagar.accesorio=ACCESORIO*nuevo->pagar.presupuesto;
		nuevo->pagar.iva=(nuevo->pagar.presupuesto*ALTA)*.16;
		nuevo->pagar.subtotal=nuevo->pagar.presupuesto*ALTA;
		nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal)+nuevo->pagar.accesorio;
		cout<<endl;
		cout<<"\t*------------------------------* \n";
		cout<<"\t ********* Su Factura ********* "<<endl;
		cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
		cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
		cout<<"\t Extras:"<<	nuevo->pagar.accesorio<<endl;
		cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
		cout<<"\t*------------------------------* ";
		}else{
			if(nuevo->presupuesto==3&&nuevo->accesorio==0){
					nuevo->pagar.iva=(nuevo->pagar.presupuesto*ALTA)*.16;
					nuevo->pagar.subtotal=nuevo->pagar.presupuesto*ALTA;
					nuevo->pagar.total=(nuevo->pagar.iva+nuevo->pagar.subtotal);
					cout<<endl;
						cout<<"\t*------------------------------*\n ";
						cout<<"\t ********* Su Factura ********* "<<endl;
						cout<<"\t Celular:"<<nuevo->pagar.subtotal<<endl;
						cout<<"\t Impuesto: "<<nuevo->pagar.iva<<endl;
						cout<<"\t Total a pagar: "<<nuevo->pagar.total<<endl;
						cout<<"\t*------------------------------* ";
			}
		}


	if(LISTA==NULL){
		nuevo->siguiente=nuevo;
		nuevo->anterior=nuevo;
		LISTA=nuevo;
	}else{

		nuevo->siguiente=LISTA->siguiente;
		nuevo->anterior=LISTA;


		LISTA->siguiente->anterior=nuevo;
		LISTA->siguiente=nuevo;
	}//if else
	cout<<endl;
	cout<<"\tArticulo vendido."<<endl;
	//*****************************************************************************************

	class Clientes *copia=LISTA;
	// Imprimir la lista
	apArchivo<<"\t\t--------------------------" << endl;
	apArchivo<<"\t\t|      	Factura     	|" << endl;
	apArchivo<<"\t\t--------------------------" << endl;
	do {
	apArchivo<<endl;
	apArchivo<<"\t*---------------------------------*"<<endl;
	apArchivo<<"\tNombre: "<<copia->nombres<<endl;
	apArchivo<<"\tApellido: "<<copia->apellidos<<endl;
	apArchivo<<"\tCI: "<<copia->cedula<<endl;

	apArchivo<<endl;
	if(copia->presupuesto==1){
		apArchivo<<"\tGama: Baja"<<endl;
	}else
	{
		if(copia->presupuesto==2){
			apArchivo<<"\tGama: Media"<<endl;
		}else
		{
				apArchivo<<"\tGama: Alta"<<endl;
		}
	}
	if(copia->accesorio==1){
	apArchivo<<"\tAccesorio: Incluido"<<endl;
	}else{
	apArchivo<<"\tAccesorio No incluido"<<endl;
	}
		if(copia->tdc==1){
	apArchivo<<"\tMetodo de pago: Tarjeta"<<endl;
	apArchivo<<"\tBanco:"<<copia->mitarjeta.bancos<<endl;
	apArchivo<<"\tTipo:"<<copia->mitarjeta.tipoTarjeta<<endl;
	}else{
		apArchivo<<"\tMetodo de pago: Efectivo"<<endl;
	}
	apArchivo<<"\t*---------------------------------*"<<endl;
    copia=copia->siguiente;
	} while( copia != LISTA);
	return;
}
////////////////////////////////////////////////////////////////////////
// Name:       Procesos::copy_file()
// Purpose:    Implementation of Procesos::copy_file()
// Return:     int
////////////////////////////////////////////////////////////////////////

int copy_file(char* f_org,char* f_dest){
	FILE *fp_org,*fp_dest;
	char c;

	if(!(fp_org=fopen(f_org,"rt")) || !(fp_dest=fopen(f_dest,"wt")))
	{
		printf("No se puede abrir los directorios ");
	}

	while((c=fgetc(fp_org))!=EOF && !ferror(fp_org) && !ferror(fp_dest))
		fputc(c,fp_dest);

	if(ferror(fp_org) || ferror(fp_org))
		return 1;

	fclose(fp_org);
	fclose(fp_dest);
	return 0;
}
