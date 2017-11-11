#include <stdio.h>
void main(){
	float a, b, suma, multi;
	printf("\nIngresa dos numeros separados por una coma. ");
	scanf("%f, %f", &a, &b);
	suma = a + b;
	multi = a * b;
	printf("\n%f + %f = %.2f\n(%f)(%f) = %.2f", a,b,suma,a,b,multi);
}