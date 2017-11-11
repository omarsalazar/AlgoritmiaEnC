#include <stdio.h>
void main(){
	int dos, cinco, diez, cincuenta;
	float total;

	printf("Cuantas monedas de 2 centavos tienes?\n");
	scanf("%d", &dos);
	printf("Cuantas monedas de 5 centavos tienes?\n");
	scanf("%d", &cinco);
	printf("Cuantas monedas de 10 centavos tienes?\n");
	scanf("%d", &diez);
	printf("Cuantas monedas de 50 centavos tienes?\n");
	scanf("%d", &cincuenta);

	total = (dos*.02) + (cinco*.05) + (diez*.10) + (cincuenta*.50);
	printf("En total tienes \"$%.3f\"\n", total);
}