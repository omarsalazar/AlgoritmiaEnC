#include <stdio.h>
void main(){
	int cantidad;
	float precio, total;
	printf("\nIngrese la cantidad del priducto y el precio. Separados por una coma. ");
	scanf("%d, %f", &cantidad, &precio);
	total = cantidad * precio;
	total += total * .16;
	printf("\nUsted tiene que pagar $%.2f (IVA inluido)", total);
}