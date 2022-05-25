
 int P(A OA)
 { B Ob;

   Ob.defineB(2);
   return OA.a*Ob.b; }

class B
 {   int b;
   public:
     friend int P(A);
     void defineB(int);
     int dameB(void);
 };