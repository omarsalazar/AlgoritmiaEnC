#include <stdio.h>
void main(){
	int anios, meses, meses1, edad;
	printf("\nIngresa tu edad en anios y meses (solo numeros, separados por una coma): ");
	scanf("%d, %d", &anios, &meses);
	meses1 = anios * 12;
	edad = meses1 + meses;
	printf("\nTu edad en meses es %d :)", edad);
}