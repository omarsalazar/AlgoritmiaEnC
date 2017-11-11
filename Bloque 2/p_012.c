#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c;
	float x,x2,d;
	printf("Dame los valores de a,b y c de la ecuaci\242n separados por coma(,): ");
	scanf("%i,%i,%i",&a,&b,&c);
	d=(pow(b,2)-(4*(a*c)));
	if(d<0)
	{
		printf("\n\nNo hay soluciones reales para la ecuaci\242n");
	}
	else
	{
		if(d==0)
		{
			x=(-b/(2*a));
			printf("\n\nS\242lo hay un resultado.");
			printf("\nx= %.4f",x);
		}
		else
		{
			x=(-b+(sqrt(d)))/(2*a);
			x2=(-b-(sqrt(d)))/(2*a);
			printf("\n\nHay dos resultados:");
			printf("\n\nx1= %.4f",x);
			printf("\nx2= %.4f",x2);
		}
	}
}
