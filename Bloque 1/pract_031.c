#include <stdio.h>
#define pi 3.141592

void main(){
	float radio, area;
	printf("\nIngresa el radio del circulo. ");
	scanf("%f", &radio);
	area = pi * (radio*radio);
	printf("\nEl area del circulo es: %.2f ", area);
}