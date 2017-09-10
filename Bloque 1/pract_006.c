#include <stdio.h>
void main(){
	float a = 10000, b, interes = .27; 

	b = a * interes; 
	printf("\nEl prestamo es de \"%f\" pesos", a);
	printf("\nSe le cobrara un interes anual de \"%.2f\" pesos\n", b);
}