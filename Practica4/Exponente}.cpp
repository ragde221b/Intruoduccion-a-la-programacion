#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double entero_potencia(int base, int exponente){
	int resultado=1;
	int i;
	for(i=0;i<exponente;i++){
		resultado=resultado*base;
	}
	printf("El resultado de %d^%d es %d",base,exponente,resultado);
}
int main(int argc, char** argv) {
	int base,exponente;
	printf("Ingrese el valor de la base:");
	scanf("%d",&base);
	printf("Ingrese el valor de la potencia:");
	scanf("%d",&exponente);
	entero_potencia(base,exponente);
	return 0;
}

