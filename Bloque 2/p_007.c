#include <stdio.h>
main()
{
	float tmax,t;
	system("color 1F");
	printf("Ingrese la temperatura m\240xima del mes: ");
	scanf("%f",&tmax);
	printf("\nIngrese la temperatura de hoy: ");
	scanf("%f",&t);
	if(t>tmax)
	{
		tmax=t;
		printf("\nLa temperatura m\240xima es: %.2f",tmax);
	}
	else
	{
		printf("\nLa temperatura m\240xima es: %.2f",tmax);
	}
}
