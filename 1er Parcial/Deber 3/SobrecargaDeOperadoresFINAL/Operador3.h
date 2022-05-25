#include <stdio.h>
#include <math.h>


class Operador3
{      double a ;
       double b ;
       double c ;
       double sq, x1, x2;
     
   public:
     Operador3(double numA=0, double numB=0,double numC=0, double numSQ=0, double numX1=0, double numX2=0);//Constructor
     void SetA(double);//setters
     void SetB(double);
     void SetC(double);
     void SetSQ(double);
     void SetX1(double);
     void SetX2(double);

     double GetA(void);//Getters
     double GetB(void);
     double GetC(void);
     double GetSQ(void);
     double GetX1(void);
     double GetX2(void);
     Operador3 operator = (Operador3);

};
//Constructor
Operador3::Operador3(double numA, double numB,double numC, double numSQ, double numX1, double numX2)
{   a=numA; 
	b=numB;
	c=numC;
	sq=numSQ; 
	x1=numX1;
	x2=numX2;
}
//Setters
void Operador3::SetA(double numA)
{    a=numA; 
}

void Operador3::SetB(double numB)
{    b=numB; 
}

void Operador3::SetC(double numC)
{    c=numC; 
}

void Operador3::SetSQ(double numSQ)
{    sq=numSQ; 
}

void Operador3::SetX1(double numX1)
{    x1=numX1; 
}

void Operador3::SetX2(double numX2)
{    x2=numX2; 
}


//Getters
double Operador3::GetA(void)
{    return a; 
}

double Operador3::GetB(void)
{    return b; 
}

double Operador3::GetC(void)
{    return c; 
}

double Operador3::GetSQ(void)
{    return sq; 
}

double Operador3::GetX1(void)
{    return x1; 
}

double Operador3::GetX2(void)
{    return x2; 
}


//Metodos
Operador3 Operador3::operator = (Operador3 C)
{   
  x1 = (sq = sqrt(b*b-4*a*c), a=a*2, (-b+sq)/a);
  x2 = (-b-sq)/a;

  printf ("x1 = %lf\n", x1);
  printf ("x2 = %lf\n", x2);
  return 0;
}
