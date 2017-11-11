#include <stdio.h>
void main(){
	float sueldo, comision;
	printf("\nIngresa tu sueldo y se calculara el total mensual mas las tres comisiones: ");
	scanf("%f", &sueldo);
	comision = .1 * sueldo;
	sueldo += (comision * 3);
	printf("\nLa ganancia mensual es de: $%.2f", sueldo);
}