#include <stdio.h>
void main(){
	float longitud, anchura, superficie;
	printf("\nIngresa la longitud y la anchura separadas por una coma. ");
	scanf("%f, %f", &longitud, &anchura);
	superficie = (longitud * anchura);
	printf("\nLa superficie es: %.4f", superficie);
}