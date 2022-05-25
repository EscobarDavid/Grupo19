#include <iostream>

class A
 {   int a;
   public:
     A(int = 0);
     void DefineA(int);
     int DameA(void);
 };

 A::A(int x)
  { a = x; }

 void A::DefineA(int x)
  { a = x; }

 int A::DameA(void)
  { return a; }

