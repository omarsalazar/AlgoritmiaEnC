#include <stdio.h>
#include <math.h>
void main(){
	float x1, y1, x2, y2, dis;
	printf("\nIngresa las coordenadas del punto A separadas por una coma. ");
	scanf("%f, %f", &x1, &y1);
	printf("\nIngresa las coordenadas del punto B separadas por una coma. ");
	scanf("%f, %f", &x2, &y2);
	dis = sqrt((pow((x1 - x2),2) + pow((y1 - y2),2)));
	printf("\nLa distancia entre los dos puntos es: %.2f", dis);
}