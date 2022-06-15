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