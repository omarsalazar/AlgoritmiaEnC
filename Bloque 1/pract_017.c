#include <stdio.h>

void main(){
	float sueldo, descontado, total;

	printf("\n Ingresa tu sueldo: ");
	scanf("%f", &sueldo);
	descontado = .25 * sueldo;
	total = sueldo - descontado;
	printf("\n Tu sueldo total es de: \"$%.2f\"", total);
}