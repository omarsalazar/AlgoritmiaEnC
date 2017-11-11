#include <stdio.h>
#include <string.h>
main()
{
	char t;
	int color,edad,tcon;
	float precio,total,auedad=0,aupermiso=0;
	printf("Ingresa el modelo: ");
	scanf("%c",&t);
	system("cls");
	printf("\n\nIngresa el n\243mero del color: \n1. Blanco\n2. Metalizado\n3. Otros\n");
	scanf("%i",&color);
	printf("\nIngresa tu edad: ");
	scanf("%i",&edad);
	printf("\n\nIngresa los a\244os con la licencia: ");
	scanf("%i",&tcon);
	
	
	if(t == 'A')//Condiciones para precio
	{
		if(color==1)
		{
			precio=240.41;
		}
		if(color==2)
		{
			precio=330.00;
		}
		if(color==3)
		{
			precio=270.50;
		}
	}
	if(t == 'B')
	{
		if(color==1)
		{
			precio=300.00;
		}
		if(color==2)
		{
			precio=360.50;
		}
		if(color==3)
		{
			precio=330.00;
		}
	}
	if(tcon<2)//Aumento para licencia
	{
		aupermiso=precio*.25;
	}
	
	if(edad>=26)//Aumentos para edad
	{
		if(edad<=30)
		{
			auedad=precio*.10;
		}
		else
		{
			if(edad<=65)
			{
				auedad=0;
			}
			else
			{
				auedad=precio*.10;
			}
		}
	}
	else
	{
		auedad=precio*.25;
	}
	total=precio+auedad+aupermiso;
	printf("\n\nEl total a pagar es: $ %.2f",total);
	
}
