#include <stdio.h>
main()
{
	int h,m,h1;
	printf("Ingrese la hora en formato de 24 hr (hh:mm): ");
	scanf("%i:%i",&h,&m);
	if(h<12)
	{
		printf("\n\nLa hora en formato de 12 hr es: %2i:%2i am",h,m);
	}
	
	if(h>12)
	{
		h1=h-12;
		printf("\n\nLa hora en formato de 12 hr es: %2i:%2i pm",h1,m);
	}
}
