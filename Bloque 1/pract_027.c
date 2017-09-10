#include <stdio.h>
void main(){
	float peso, gramos, libras, toneladas;
	printf("\nIngresa tu peso en kg. ");
	scanf("%f", &peso);
	gramos = peso * 1000; 
	libras = peso * 2.20462;
	toneladas = peso / 1000;
	printf("\nEste es tu peso en: \nGramos: %.2f\nLibras: %.2f\nToneladas: %.2f", gramos, libras,toneladas);
}