#include <stdio.h>
void main(){
	float lado, alto, area, revoque;
	printf("Ingresa el alto y el ancho de la pared separados por una coma: \n");
	scanf("%f, %f", &lado, &alto);
	area = alto * lado;
	revoque = area * 0.5;
	printf("Se necesitaran %.2f metros cubicos de arena\n", revoque);
}