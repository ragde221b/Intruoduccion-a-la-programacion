#include <iostream>


float calcular_r(float r, float v, float i);
float calcular_v(float r, float v, float i);
float calcular_i(float r, float v, float i);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("Menu de magnitudes para calcular mediante la ley de Ohm:\n1)\tResistencia\n2)\tVoltaje\n3)\tCorriente\nIngrese el numero correspondiente a la magnitud que desea calcular:\t");
}

int main(int argc, char** argv) {
	float r,v,i;
	int opc;
	menu();
	scanf("%d",&opc);
	switch(opc){
		case 1:
			calcular_r(r,v,i);
		break;
		case 2:
			calcular_v(r,v,i);
		break;
		case 3:
			calcular_i(r,v,i);
		break;
		default:
			printf("Opcion invalida");
		break;
	}
	return 0;
}
float calcular_r(float r, float v, float i){
	printf("Ingrese el valor del voltaje y de la corriente");
	scanf("%f %f",&v,&i);
	r=v/i;
	system("pause");
	system("cls");
	printf("El valor de la resistencia es: %f",r);
}
float calcular_v(float r, float v, float i){
	printf("Ingrese el valor de la resistensia y de la corriente");
	scanf("%f %f",&r,&i);
	v=r*i;
	system("pause");
	system("cls");
	printf("El valor de la resistencia es: %f",v);
}
float calcular_i(float r, float v, float i){
	printf("Ingrese el valor del voltaje y de la resistencia");
	scanf("%f %f",&v,&r);
	i=v/r;
	system("pause");
	system("cls");
	printf("El valor de la resistencia es: %f",i);
}
