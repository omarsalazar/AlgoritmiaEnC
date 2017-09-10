#include <stdio.h>
void main(){
	int a, b, suma, multi;
	printf("\nIngresa dos numeros enteros positivos separados por una coma. ");
	scanf("%d, %d", &a, &b);
	suma = a + b;
	multi = a * b;
	printf("\n%d + %d = %d\n(%d)(%d) = %d", a,b,suma,a,b,multi);
}