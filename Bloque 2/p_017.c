#include <stdio.h>
#include <time.h>
main()
{
	int bol= 1+rand()%4;
	float imp,total,des;
	printf("Ingresa el importe a pagar: $ ");
	scanf("%f",&imp);
	if(bol==1)
	{
		printf("\n\nTe toc\242 bolita azul");
		des=imp*.20;
	}
	if(bol==2)
	{
		printf("\n\nTe toc\242 bolita roja");
		des=imp*.30;
	}
	if(bol==3)
	{
		printf("\n\nTe toc\242 bolita blanca");
		des=0;
	}
	total=imp-des;
	printf("\n\nEl total a pagar es: $ %.2f",total);
	
}
