#include <stdio.h>

void main(){

	float mxn = 0.0 ,dolar = 0.056455, euro = 0.0469076512, totalusd, totaleur;

	printf("\n Para convertir de \"mxn\" a \"usd\" y a \"eur\" ingresa la cantidad de pesos que quieres convertir: ");
	scanf("%f", &mxn);
	totalusd = mxn * dolar;
	totaleur = mxn * euro;
	printf("\n La cantidad ingresada en \"mxn\" es equivalente a: \"%.2f eur\" y \"%.2f usd\"", totalusd, totaleur);
}