#include<iostream>
#include<iomanip>
using namespace std;

class Operador4
{    int a;
	 int b;	
     
   public:
     Operador4(int numA=0, int numB=0);//Constructor
     void SetA(int);//setters
     void SetB(int);
     int GetA(void);//Getters
     int GetB(void);
     Operador4 operator = (Operador4);

};
//Constructor
Operador4::Operador4(int numA, int numB)
{   a=numA; 
	b=numB;
}
//Setters
void Operador4::SetA(int numA)
{    a=numA; 
}

void Operador4::SetB(int numB)
{    b=numB; 
}

//Getters
int Operador4::GetA(void)
{    return a; 
}

int Operador4::GetB(void)
{    return b; 
}



//Metodos
Operador4 Operador4::operator = (Operador4 C)
{    
	//int sum;
	//cout<<(a | b)<<"\n";
	return (a | b);
}

