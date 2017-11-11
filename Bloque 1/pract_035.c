#include <stdio.h>
void main(){
	float base, altura, area;
	printf("\nIngresa la base y la altura separadas por una coma. ");
	scanf("%f, %f", &base, &altura);
	area = (base * altura) / 2;
	printf("\nEl area es: %.2f", area);
}