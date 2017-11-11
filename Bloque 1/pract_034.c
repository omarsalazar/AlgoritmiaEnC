#include <stdio.h>
void main(){
	float a, b, c;
	printf("\nIngresa los tres salarios separados por una coma. ");
	scanf("%f, %f, %f", &a, &b, &c);
	a += a * .1;
	b += b * .12;
	c += c * .15;
	printf("\nLos salarios quedaron asi:\nEmpleado 1: $%.2f\nEmpleado 2: $%.2f\nEmpleado 3: $%.2f", a, b, c);
}