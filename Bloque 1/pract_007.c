#include <stdio.h>
void main(){
	float precio = 6.05, km, total;

	printf("\n Para calcular el precio del boleto deberas ingresar los km recorridos: ");
	scanf("%f", &km);
	total = km * precio;
	printf("\n El precio de su boleto es de: \"$%.2f\"", total);
}