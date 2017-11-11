#include <stdio.h>
#include <math.h>
void main(){
	int a;
	printf("\nIngresa un numero entero. ");
	scanf("%d", &a);
	a = pow(a, 3);
	printf("\nOh, mira ahora ese numero esta elevado al cubo: %d", a);
}