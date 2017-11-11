#include <stdio.h>
main()
{
	float a,b,c;
	printf("Ingrese 3 n\243meros separados por coma (,) en orden numerico: ");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a<b)
	{
		if(b<c)
		{
			printf("\n\nEst\240n en orden num\202rico");
		}
		else
		{
			printf("\n\nNo est\240n en orden num\202rico");
		}
	}
	else
	{
		printf("\n\nNo est\240n en orden num\202rico");
	}
}
