#include <iostream>
#include <string.h>
#include <stdlib.h>

char linea[20];
char fecha[8];
char e[2]="/";
char f[2]="\0";
char *token;
int num[10],i;

int main(int argc, char** argv) {
	printf("Ingrese la fecha en formato dd/mm/aa");
	gets(fecha);
	token=strtok(fecha,e);
	while ((token=strtok(NULL,e)) !=NULL ){
		num[i]=atoi(token);
		i++;
	}
	if(num[0]>00&&num[0]<32){
		printf("%d\t",num[0]);
	}
	
	
	
	return 0;
}
