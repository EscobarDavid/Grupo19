#include<iostream>
#include<iomanip>

class Operador1
{    float a;
     float b;
     float c;
     float d;
     
   public:
     Operador1(float numA=0, float numB=0,float numC=0, float numD=0);//Constructor
     void SetA(float);//setters
     void SetB(float);
     void SetC(float);
     void SetD(float);
     float GetA(void);//Getters
     float GetB(void);
     float GetC(void);
     float GetD(void);
     Operador1 operator = (Operador1);

};
//Constructor
Operador1::Operador1(float numA, float numB,float numC, float numD)
{   a=numA; 
	b=numB;
	c=numC;
	d=numD; 
}
//Setters
void Operador1::SetA(float numA)
{    a=numA; 
}

void Operador1::SetB(float numB)
{    b=numB; 
}

void Operador1::SetC(float numC)
{    c=numC; 
}

void Operador1::SetD(float numD)
{    d=numD; 
}
//Getters
float Operador1::GetA(void)
{    return a; 
}

float Operador1::GetB(void)
{    return b; 
}

float Operador1::GetC(void)
{    return c; 
}

float Operador1::GetD(void)
{    return d; 
}
//Metodos
Operador1 Operador1::operator = (Operador1 C)
{    
	float resultado;
	resultado=C.GetA()+C.GetB();
	resultado=C.GetB()-C.GetC();
	resultado=C.GetC()*C.GetD();
	return resultado;
}

