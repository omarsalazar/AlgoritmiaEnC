#include <stdio.h>
main()
{
	float a,b,c;
	printf("Ingresa 3 n\243meros diferentes separados por una coma (,): ");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("\n\n"); //Se me olvidó darle el salto de línea a cada printf profe, disculpe jajaja
	
	if(a>b && b>c)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",a,b,c);
	}
	if(a>b && c>b)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",a,c,b);
	}
	if(b>a && a>c)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",b,a,c);
	}
	if(b>a && c>a)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",b,c,a);
	}
	if(c>b && b>a)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",c,b,a);
	}
	if(c>a && a>b)
	{
		printf("El orden de mayor a menor es:  1 %.2f 2 %.2f 3 %.2f",c,a,b);
	}
}
