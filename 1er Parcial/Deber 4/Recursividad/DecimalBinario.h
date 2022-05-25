#include <iostream>
#include <cstring>
#include <stdlib.h>
#define BIN 16


/*void decimaBinario(int,char[]);


void decimaBinario(int val,char cad[]){
if(val>=1){
decimaBinario(val/BIN,cad);
strcpy(cad,itoa((val%2),cad,10));
}
strcat(cad,"\0");
//printf("%s",cad);
}*/

void decimalBinario(int val, char *cad){
	if(val >= 1){
		decimalBinario(val/2,cad);
		itoa(val%2,cad+strlen(cad),10);
	}
	strcat(cad,"\0");
}
