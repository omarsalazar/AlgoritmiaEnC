#include <stdio.h>

void main(){
	float salario, aumento = .05, aumentado, total;

	printf("\n Ingresa tu actual salario: ");
	scanf("%f", &salario);
	printf("\n Se te aplicara un aumento del 8 y un descuento del 2.5 por ciento\n");
	aumentado = aumento * salario;
	total = salario + aumentado;
	printf("\n Ahora tu salario es de: \"$%.2f\"", total);
}