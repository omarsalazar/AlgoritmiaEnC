#include <stdio.h>
void main(){
	float parcial1, parcial2, parcial3, calif;
	printf("\nIngresa las calificaciones de cada parcial separadas por una coma: ");
	scanf("%f, %f, %f", &parcial1, &parcial2, &parcial3);
	calif = (parcial1 + parcial2 + parcial3) / 3;
	printf("\nTu calificacion final es: %.1f", calif);
}