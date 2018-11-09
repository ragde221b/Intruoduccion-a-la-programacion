#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char frase[100];
char inversa[100];

int main(int argc, char** argv) {
	int i,x;
	printf("Introdusca la linea de texto:\t");
	gets(frase);
	printf("%d",strlen(frase));
	x=strlen(frase);
	for(i=0;i<=strlen(frase);i++){
		inversa[i]=frase[x];
		x--;
	}
	printf("%s",inversa);
	return 0;
}
