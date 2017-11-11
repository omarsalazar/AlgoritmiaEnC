#include <stdio.h>

void main(){
	char medicamento[30];
	float precio, descuento = .35, descontado, total;

	printf("\n Ingresa el nombre del medicamento: ");
	scanf("%s", &medicamento);
	printf("\n Ingresa el precio del medicamento: ");
	scanf("%f", &precio);
	descontado = descuento * precio;
	total = precio - descontado;
	printf("\n El precio total de \"%s\" es de: \"$%.2f\"", medicamento, total);
}