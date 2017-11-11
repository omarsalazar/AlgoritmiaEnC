#include <stdio.h>
void main(){
	float presupuesto, presurgen, prespedia, prestraum;
	printf("\nIngresa el presupuesto y lo dividire entre las tres areas: \n");
	scanf("%f", &presupuesto);
	presurgen = presupuesto * .37;
	prespedia = presupuesto * .42;
	prestraum = presupuesto * .21;
	printf("\nEl presupuesto se dividio asi:\n Urgencias:\"$%.2f\"\n Pediatria:\"$%.2f\"\n Traumatologia:\"$%.2f\"\n", presurgen, prespedia, prestraum);
}