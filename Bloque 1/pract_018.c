#include <stdio.h>
#include <math.h>
void main(){
	int num1, num2, a, b;
	printf("Ingresa 2numeros separados por una coma: \n");
	scanf("%d, %d", &num1, &num2);
	a = (2*num1) + pow(num2, 2);
	b = (pow(num1, 3) + pow(num2, 3))/2;
	printf("La suma del doble del primero mas el cuadrado del segundo es: %d\n", a);
	printf("El promedio de sus cubos es: %d\n", b);
}