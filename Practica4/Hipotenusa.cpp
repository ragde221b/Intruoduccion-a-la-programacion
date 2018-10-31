#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double hipotenusa(){
	double c1,c2,h2,h;
	printf("Ingrese el valor de los catetos 1 y 2 respectivamente\n");
	scanf("%lf %lf",&c1,&c2);
	h2=(c1*c1)+(c2*c2);
	h=sqrt(h2);
	printf("El valor de la hipotenusa del triangulo es: %lf\n",h);
	
}
int main(int argc, char** argv) {
	int i;
	for(i=0;i<3;i++){
		hipotenusa();
	}
	return 0;
}
