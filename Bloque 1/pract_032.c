#include <stdio.h>
void main(){
	
	float cm,inches;
	printf("\nCuantos cm quieres convertir?. ");
	scanf("%f", &cm);
	inches = cm * 0.39737;
	printf("\n%.3f cm = %.3f inches", cm, inches);

}