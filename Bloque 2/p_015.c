#include <stdio.h>
main()
{
	int a;
	printf("Ingrese el a\244o: ");
	scanf("%i",&a);
	if(a % 4 == 0)
	{
		printf("\nA\244o bisiesto.");
	}
	else
	{
		printf("\nNo es a\244o bisiesto");
	}
}
