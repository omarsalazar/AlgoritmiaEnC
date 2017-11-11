#include <stdio.h>
main()
{
	int gl,gv;
	printf("Ingresa los goles del equipo local: ");
	scanf("%i",&gl);
	printf("Ingresa los goles del equipo visitante: ");
	scanf("%i",&gv);
	if(gl>gv)
	{
		printf("\n\nLocal");
	}
	if(gl<gv)
	{
		printf("\n\nVisitante");
	}
	if(gl==gv)
	{
		printf("\n\nEmpate");
	}
}
