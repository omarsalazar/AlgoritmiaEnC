#include <stdio.h>
void main(){
	float base, altura, perimetro;
	printf("\nIngresa la base y la altura separadas por una coma para calcular el perimetro de un rectangulo. ");
	scanf("%f, %f", &base, &altura);
	perimetro = (base + altura) * 2;
	printf("\nEl perimetro es: %.2f", perimetro);
}