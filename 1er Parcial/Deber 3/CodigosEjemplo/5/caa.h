#include<iostream>
#include<iomanip>

class A
{    float x;
   public:
     A(float cx=0);
     void DefineX(float);
     float DameX(void);
     A operator ++ (void); // como prefijo
     A operator ++ (int);  // como sufijo
                           // el parámetro int es obligatorio
};

A::A(float cx)
{    x=cx; 
}

float A::DameX(void)
{    return x; 
}

A A::operator ++ (void)
{    x=x*x;
     return *this;
}

A A::operator ++ (int)
{    A aux=*this;
     x=x*x;
     return aux;
}
