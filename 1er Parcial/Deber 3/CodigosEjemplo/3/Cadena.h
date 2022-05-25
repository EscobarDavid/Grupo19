#include <cstring>
#include <string.h>

class Cadena
{    char cad[40];
   public:
     Cadena(string);
     string * DameCadena(void);
     void operator + (Cadena);
};

/* Al ejecutar este programa se muestra:
   Atributo de C1 = Juan López
*/