#include <stdio.h>
void main(){
	float mxn, dolar;
	printf("\nCuantos pesos quieres cambiar a dolares?: ");
	scanf("%f", &mxn);
	dolar = mxn * 0.056455;
	printf("\nTienes %.3f dolares", dolar);
}