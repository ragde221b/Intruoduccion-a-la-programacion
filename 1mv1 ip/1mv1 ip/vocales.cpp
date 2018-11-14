#include <iostream>
#include <string.h>

char linea[200];

int main(int argc, char** argv) {
	int j,x,a=0,e=0,i=0,o=0,u=0;
	printf("Ingrese la linea de texto ");
	gets(linea);
	x=strlen(linea);
	for(j=0;j<x;j++){
		switch (linea[j]){
			case 'a':
				a=a+1;
			break;
			case 'e':
				e=e+1;
			break;
			case 'i':
				i=i+1;
			break;
			case 'o':
				o=o+1;
			break;
			case 'u':
				u=u+1;
			break;
		}
	}
	printf("La linea %s contiene:\na=%d\ne=%d\ni=%d\no=%d\nu=%d\n",linea,a,e,i,o,u);
	return 0;
}
