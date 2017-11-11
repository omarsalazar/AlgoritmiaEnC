
#include <stdio.h>

main()
{
	float a,b,c;
	printf("Ingresa 3 n\243meros diferentes separados por una coma (,): ");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("\n\n"); //Se me olvidó darle el salto de línea a cada printf profe, disculpe jajaja
	if(a>b)
	{
		if(b>c)
		{
			printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",a,b,c);
		}
		else
		{
			if(c>a)
			{
				printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",c,a,b);
			}
			else
			{
				printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",a,c,b);
			}
		}
	}
	else
	{
		if(a>c)
		{
			printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",b,a,c);
		}
		else
		{
			if(c>b)
			{
				printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",c,b,a);
			}
			else
			{
				printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",b,c,a);
			}
		}
	}
}
