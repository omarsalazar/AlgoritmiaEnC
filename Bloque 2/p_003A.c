#include <stdio.h>
main()
{
	int cal;
	printf("Ingresa la calificacion: ");
	scanf("%i",&cal);
	
	if(cal==6)
	{
		printf("\n\nDeficiente, chamaco");
	}
	if(cal==7)
	{
		printf("\n\nPuedes hacerlo mejor, chamaco");
	}
	if(cal==8)
	{
		printf("\n\nBien, chamaco");
	}
	if(cal==9)
	{
		printf("\n\nSobresaliente, chamaco");
	}
	if(cal==10)
	{
		printf("\n\nExcelente, chamaco");
	}
	if(cal<6)
	{
		printf("\n\nReprobado, chamaco");
	}
}
