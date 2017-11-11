#include <stdio.h>
main()
{
	int i=1,n,num=0;
	printf("Ingresa el n\243mero de elementos que desea ver de la serie: ");
	scanf("%i",&n);
	while(i<=n)
	{
		printf("\n%i",num);
		num=num+2;
		i++;
	}
	printf("\n\nAdi\242s");
}
