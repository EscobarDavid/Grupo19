class A
 {   int a;
   public:
     friend int P(A);
     void defineA(int);
     int dameA(void);
 };
 int P(A OA)
 { B Ob;

   Ob.defineB(2);
   return OA.a*Ob.b; }
