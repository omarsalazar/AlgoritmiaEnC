#include <stdio.h>
void main(){
	int horasmenos = 0;
	float precio = 1.5, horas, total, descuento;

	printf("\n Para calcular el monto a pagar deberas ingresar las horas que ocupaste: ");
	scanf("%f", &horas);
	total = horas * precio;
	
	if (horas >= 5){
		horasmenos = horas / 5;
		descuento = horasmenos * precio;
		printf("\n Se te aplicará un descuento por cada 5 horas");
		printf("\n El descuento sera de \"%d\" horas", horasmenos);
		total -= descuento;
		printf("\n El monto a pagar es de: \"$%.2f\"", total); 	
	}
	else{
		printf("\n El monto a pagar es de: \"$%.2f\"", total);
	}
}