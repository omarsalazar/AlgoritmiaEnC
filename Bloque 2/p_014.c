#include <stdio.h>
main()
{

	int serie;
	printf("Ingrese el n\243mero de serie: ");
	scanf("%i",&serie);
	if(serie>=14681)
	{
		if(serie<=15861)
		{
			printf("\n\nDefectuoso");
		}
		else
		{
			if(serie>70000)
			{
				if(serie<80000)
				{
					printf("\n\nDefectuoso");
				}
				else
				{
					if(serie>=88888)
					{
						if(serie<=111111)
						{
							printf("\n\nDefectuoso");
						}
						else
						{
							printf("\n\nNo defectuoso");
						}
					}
				}
			}
		}
	}
	else
	{
		printf("\n\nNo defectuoso");
	}
	
}
