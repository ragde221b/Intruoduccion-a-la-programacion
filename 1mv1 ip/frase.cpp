#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char frase[100];
char e[2]="-";
char *token;

int main(int argc, char** argv) {
	printf("Ingrese la frase:\t");
	gets(frase);
	token=strtok(frase,e);
	printf("%s\n",token);
	while ((token=strtok(NULL,e)) !=NULL ){
		printf("%s\n",token);
	}
	return 0;
}
