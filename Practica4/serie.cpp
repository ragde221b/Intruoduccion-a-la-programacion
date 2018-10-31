#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int calcular_serie(int n);

int main(int argc, char** argv) {
	int n;
	printf("Ingrese el valor de n");
	scanf("d",&n);
	calcular_serie(n);
	return 0;
}
int calcular_serie(int n){
	int serie,i=0,u;
	while(i<n){
		u=i+1;
		serie+=(-1^(u))*(u^u);
		i++;
	}
	printf("El resultado de la serie es: %d",serie);
}
