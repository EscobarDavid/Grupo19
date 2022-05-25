#include <iostream>
#include <ostream>
#include "Cproceso.h"
using namespace std;
/*void Cproceso::setNum(int numerador){
	num=numerador;
}
void Cproceso::setDen(int denominador){
	den=denominador;
}
int Cproceso::getNum(){
	return num;
}
int Cproceso::getDen(){
	return den;
}*/

void Cproceso::imprimirObj(Cproceso obj){
	cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;	
}