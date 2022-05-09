
#include <stdio.h>
int main () {
	int x, y, z;
	printf("Digite um numero inteiro x: \n");
	scanf("%d",&x);
	printf("Digite um numero inteiro y: \n");
	scanf("%d",&y);
	if(x > y){
		z = x - y;
		printf("%d e o maior numero, e a diferenca entre esses 2 numeros e de: %d",x,z );
	}
	else {
		z = y - x;
		printf("%d e o maior numero, e a diferenca entre esses 2 numeros e de: %d",y,z);
	}
	return 0;
}

