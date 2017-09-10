#include <stdio.h>
void main(){
	int a, b, c, suma, resta, multi;
	printf("\nIngresa tres numeros enteros positivos separados por una coma. ");
	scanf("%d, %d, %d", &a, &b, &c);
	suma = a + b + c;
	resta = a - b - c;
	multi = a * b * c;
	if (resta < 0){
		printf("\n%d + %d + %d = %d\n%d - %d - %d = 0\n(%d)(%d)(%d) = %d", a,b,c,suma,a,b,c,a,b,c,multi);
	}
	else{
		printf("\n%d + %d + %d = %d\n%d - %d - %d = %d\n(%d)(%d)(%d) = %d", a,b,c,suma,a,b,c,resta,a,b,c,multi);
	}
	
}