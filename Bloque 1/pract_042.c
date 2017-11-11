#include <stdio.h>
void main(){
	int segundos, minutos, modu;
	printf("\nIngresa los segundos que quieres convertir. ");
	scanf("%d", &segundos);
	minutos = segundos / 60;
	modu = segundos % 60;
	if (modu != 0){
		printf("\n%ds = %dmin, %ds", segundos, minutos, modu);
	}
	else{
		printf("\n%ds = %dmin", segundos, minutos);
	}
}