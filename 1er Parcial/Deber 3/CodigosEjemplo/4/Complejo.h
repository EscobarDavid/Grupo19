#include<iostream>
#include<iomanip>

class Complejo
{    float real;
     float imag;
   public:
     Complejo(float r=0, float i=0);
     void DefineR(float);
     void DefineI(float);
     float DameR(void);
     float DameI(void);
     Complejo operator + (Complejo);
     Complejo operator - (Complejo);
};

Complejo::Complejo(float r, float i)
{    real=r; imag=i; 
}

void Complejo::DefineR(float r)
{    real=r; 
}

void Complejo::DefineI(float i)
{    imag=i; 
}

float Complejo::DameR(void)
{    return real; 
}

float Complejo::DameI(void)
{    return imag; 
}

Complejo Complejo::operator + (Complejo C)
{    return Complejo(real+C.DameR() , imag+C.DameI());
}

Complejo Complejo::operator - (Complejo C)
{    return Complejo(real-C.DameR() , imag-C.DameI());
}