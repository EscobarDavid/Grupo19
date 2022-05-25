#include<iostream>
#include<iomanip>

using namespace std;

class Operador2
{    int a;
	 int b;	
     
   public:
     Operador2(int numA=0, int numB=0);//Constructor
     void SetA(int);//setters
     void SetB(int);
     int GetA(void);//Getters
     int GetB(void);
     Operador2 operator = (Operador2);

};
//Constructor
Operador2::Operador2(int numA, int numB)
{   a=numA; 
	b=numB;
}
//Setters
void Operador2::SetA(int numA)
{    a=numA; 
}

void Operador2::SetB(int numB)
{    b=numB; 
}

//Getters
int Operador2::GetA(void)
{    return a; 
}

int Operador2::GetB(void)
{    return b; 
}



//Metodos
Operador2 Operador2::operator = (Operador2 C)
{    

	int resultado;
    resultado+=b*a;
    return resultado;
}
