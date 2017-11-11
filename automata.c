#include <stdio.h>
#include <string.h>
#define TAM 200
main(){
	int i,estado = 0;
	char palabra[TAM];
	printf("Ingresa la palabra: ");
	gets(palabra);
	
	while(palabra[i] != '0'){
		switch(estado){
			case 0:
					if(palabra[i] == 'a'){
						estado=1;
					}
					if(palabra[i] == 'b'){
						estado=4;
					}
					if(palabra[i] == 'c'){
						estado=4;
					}
				break;
			case 1:
					if(palabra[i] == 'a'){
						estado=1;
					}
					if(palabra[i] == 'b'){
						estado=4;
					}
					if(palabra[i] == 'c'){
						estado=2;
					}
				break;
			case 2:
					if(palabra[i] == 'a'){
						estado=4;
					}
					if(palabra[i] == 'b'){
						estado=3;
					}
					if(palabra[i] == 'c'){
						estado=4;
					}
				break;
			case 3:
					if(palabra[i] == 'a'){
						estado=4;
					}
					if(palabra[i] == 'b'){
						estado=3;
					}
					if(palabra[i] == 'c'){
						estado=4;
					}
				break;
			case 4:
					if(palabra[i] == 'a'){
						estado=4;
					}
					if(palabra[i] == 'b'){
						estado=4;
					}
					if(palabra[i] == 'c'){
						estado=4;
					}
				break;
		}
		i++;
	}
	if(estado == 2||estado == 3){
		printf("\nPalabra valida");
	}
	else{
		printf("\nPalabra invalida");
	}
	
	
}