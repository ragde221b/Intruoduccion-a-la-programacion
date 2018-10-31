#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int pide_datos(int alto[],int ancho[], int largo[]);
int calcular_volumen(int alto[],int ancho[], int largo[]);

int main(int argc, char** argv) {
	int alto[3], ancho[3], largo[3];
	pide_datos(alto,ancho,largo);
	calcular_volumen(alto,ancho,largo);
	return 0;
}
int pide_datos(int alto[],int ancho[], int largo[]){
	int i;
	for(i=0;i<3;i++){
		printf("Ingrese el alto de la habitacion %d\t",i+1);
		scanf("%d",&alto[i]);
		printf("Ingrese el ancho de la habitacion %d\t",i+1);
		scanf("%d",&ancho[i]);
		printf("Ingrese el largo de la habitacion %d\t",i+1);
		scanf("%d",&largo[i]);
	}
}
int calcular_volumen(int alto[],int ancho[], int largo[]){
	int vol[3],i,total=0;
	for(i=0;i<3;i++){
		vol[i]=alto[i]*ancho[i]*largo[i];
		printf("El volumen de la habitacion %d es %d\n",i,vol[i]);
		total+=vol[i];
	}
	printf("El volumen total es %d",total);
}
