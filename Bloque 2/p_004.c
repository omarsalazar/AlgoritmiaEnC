#include <stdio.h>
main()
{
	int num;

	printf("Dame el n\243mero: ");
	scanf("%i",&num);
	if(num % 2 == 0)
	{
		printf("\n\nEs par");
	}
	else
	{
		printf("\n\nEs impar");
	}
}
