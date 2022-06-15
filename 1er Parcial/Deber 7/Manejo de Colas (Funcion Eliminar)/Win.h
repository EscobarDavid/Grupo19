/*
	*Universidad de las Fuerzas Armadas "ESPE"
	*Programa que realize las acciones basicas para el manejo de una cola (ELIMINAR)
	*Arias Xavier, Escobar David
	*Fecha de creacion: 13/06/2022
	*Fecha de modificacion: 014/06/2022
	*Grupo 5
	*https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
*/

/***********************************************************************
 * Module:  Win.h
 * Author:  Escobar David, Arias Xavier
 * Modified: jueves, 9 de junio de 2022 03:44:41 p. m.
 * Purpose: Declaration of the class Win
 ***********************************************************************/

////////////////////////////////////////////////////////////////////////
// Name:       Win::gotoxy(int x, int y)
// Purpose:    Implementation of Win::gotoxy()
// Parameters:
// - x
// - y
// Return:     void
////////////////////////////////////////////////////////////////////////
void gotoxy(int x, int y) {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
