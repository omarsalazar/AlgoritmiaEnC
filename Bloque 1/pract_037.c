#include <stdio.h>
#include <math.h>
void main(){
	float a, b, c, area, aux;
	printf("\nLados del triangulo (separados por comas). ");
	scanf("%f, %f, %f", &a, &b, &c);
	aux = (a + b + c) / 2;
	area = sqrt((aux * ((aux-a)*(aux-b)*(aux-c))));
	printf("\nEl area del triangulo es: %.2f", area);
}