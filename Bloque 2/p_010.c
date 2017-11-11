#include <stdio.h>
main()
{
	float num;
	printf("Ingresa un n\243mero: ");
	scanf("%f",&num);
	if(num<0)
	{
		printf("\n\nMenor a 0");
	}
	else
	{
		if(num>100)
		{
			printf("\n\nMayor a 100");
		}
		else
		{
			printf("\n\nMenor igual a 100 y mayor a 0");
		}
	}
}
