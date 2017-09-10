#include <stdio.h>
void main(){
	float eca, hect;
	printf("\nIngresa la extension en acres y yo la convertire a hectareas. ");
	scanf("%f", &eca);
	hect = eca * 0.404686;
	printf("\nLa extension en hectareas es de: %.2f", hect);
}