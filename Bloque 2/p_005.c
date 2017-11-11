#include <stdio.h>

main()
{
	char l1,l2,l3;
	printf("Ingresa las 3 letras separadas por coma (,): ");
	scanf("%c,%c,%c",&l1,&l2,&l3);
	if(l1<l2)
	{
		if(l1<l3)
		{
			printf("La primer letra es: %c",l1);
		}
		else
		{
			printf("La primer letra es: %c",l3);
		}
	}
	else
	{
		if(l2<l3)
		{
			printf("La primer letra es: %c",l2);
		}
		else
		{
			printf("La primer letra es: %c",l3);
		}
	}
}
