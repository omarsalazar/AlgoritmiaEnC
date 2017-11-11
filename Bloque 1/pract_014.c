#include <stdio.h>
void main(){
	float sueldo, horas, total, tiempoextra, pagaextra;

	printf("Ingresa tu sueldo:\n");
	scanf("%f", &sueldo);
	printf("Ingresa las horas trabajadas:\n");
	scanf("%f", &horas);
	total = horas * sueldo;
	//Entendi que el sueldo era por dia :c 
	if (horas > 8){
		tiempoextra = horas - 8;
		pagaextra = (sueldo * tiempoextra) * 2;
		printf("\nLas horas extra se pagan doble!");
		printf("\nSe te pagaran al doble \"%.0f\" horas extra, felicidades C:", tiempoextra);
		total += pagaextra;
		printf("\nTu sueldo total es de: \"$%.2f\"", total); 	
	}
	else{
		printf("\nTu sueldo total es de: \"$%.2f\"", total);
	}
}