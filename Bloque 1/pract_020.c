#include <stdio.h>
void main(){
	float inversion, total, interes;
	printf("\nIngresa la cantidad de dinero que quieres invertir: ");
	scanf("%f", &inversion);
	interes = (inversion*.25) * 12;
	total = interes + inversion;
	printf("\nEl total de la inversion despues de un anio es: %.2f", total);
}