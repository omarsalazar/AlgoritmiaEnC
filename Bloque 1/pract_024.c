#include <stdio.h>
void main(){
	float hombres, mujeres, total;
	printf("\nIngresa el numero de mujeres y hombres separado por una coma: ");
	scanf("%f, %f", &mujeres, &hombres);
	total = hombres + mujeres;
	hombres = (hombres * 100) / total;
	mujeres = (mujeres * 100) / total;
	printf("\nEn el salon hay un porcentaje de: \nMujeres: %.2f\nHombres: %.2f", mujeres, hombres);
}