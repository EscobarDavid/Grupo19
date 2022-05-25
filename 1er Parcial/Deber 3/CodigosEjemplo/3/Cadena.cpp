#include "Cadena.h"
#include <cstring>
#include <string.h>

Cadena::Cadena(string *c)
{    strcpy(cad,c);
}

string *Cadena::DameCadena(void)
{    return cad; 
}

void Cadena::operator +(Cadena C)
{    strcat(cad, C.DameCadena()); 
}
