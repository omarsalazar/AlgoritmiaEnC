#include <stdio.h>
void main(){
	int hora, minuto, segundo, segundos1, segundos2, tiempo;
	float costo;
	printf("Ingresa el tiempo del proceso separando las horas, minutos y segundos con una coma: \n");
	scanf("%d, %d, %d", &hora, &minuto, &segundo);
	//Convierto las horas en segundos
	segundos1 = hora * 3600;
	//convierto los minutos en segundos
	segundos2 = minuto * 60;
	tiempo = segundo + segundos1 + segundos2;
	costo = tiempo * 0.25;

	printf("El costo por duracion del proceso sera de $%.2f\n", costo, tiempo);
}