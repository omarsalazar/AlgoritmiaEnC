#include <stdio.h>
#define pi 3.141592

void main(){
	float radio, area, longi;
	printf("\nIngresa el radio del circulo. ");
	scanf("%f", &radio);
	area = pi * (radio*radio);
	longi = 2 * pi * radio;
	printf("\nEl area del circulo es: %.2f\nLa longitud de la circuenferencia es: %.2f", area, longi);
}