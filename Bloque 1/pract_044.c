#include <stdio.h>
void main(){
	float celci, faren;
	printf("\nIngresa una temperatura en C y la convertire a F. ");
	scanf("%f", &celci);
	faren = (9/5) * (celci +32);
	printf("\n%.2f C = %.2fF", celci, faren);
	}