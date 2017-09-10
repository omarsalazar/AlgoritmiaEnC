#include <stdio.h>
void main(){
	float metros, pulgadas, pies;
	printf("\nCuantos metros quieres convertir a pies y pulgadas? ");
	scanf("%f", &metros);
	pies = metros * 3.28084;
	pulgadas = metros * 39.3701;
	printf("\n%.3f m = %.3f ft\n%.3f m = %.3f in", metros, pies, metros, pulgadas);
}