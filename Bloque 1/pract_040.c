#include <stdio.h>
void main(){
	int a, b, div, modu;
	printf("\nIngresa dos enteros separados por una coma ");
	scanf("%d, %d", &a, &b);
	div = a / b;
	modu = a % b;
	printf("\n%d / %d = %d\n%d %% %d = %d", a, b, div, a, b, modu);
}