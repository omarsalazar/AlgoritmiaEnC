#include <stdio.h>
void main(){
	
	float kg, lb;
	printf("\nCuantas lb quieres convertir?. ");
	scanf("%f", &lb);
	kg = lb * 0.453592;
	printf("\n%.3f lb = %.3f kg", lb, kg);

}