#include <stdio.h>
void main(){
	float compra;
	printf("\nIngresa el total de la compra: ");
	scanf("%f", &compra);
	compra -= compra * .15;
	printf("\nEl total es de: $%f", compra);
}