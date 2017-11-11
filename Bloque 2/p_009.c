#include <stdio.h>
main()
{
	int a,b;
	float x;
	printf("\t\tResoluci\242n de ecuaciones de la forma ax+b=0");
	printf("\n\nIngrese el valor de a: ");
	scanf("%i",&a);
	printf("\n\nIngrese el valor de b: ");
	scanf("%i",&b);
	if(a != 0)
	{
		x=(-b/a);
		printf("La soluci\242n es: %.2f",x);
	}
	else
	{
		if(b==0)
		{
			printf("\n\nSoluci\242n indeterminada");
		}
		else
		{
			printf("\n\nSoluci\242n imposible");
		}
	}
}
