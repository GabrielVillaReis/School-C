
#include <math.h>
#include <stdio.h>
int main() {
	int x;
	float y;
	printf("Escreva um numero inteiro \n");
	scanf("%d",&x);
	if (x <= 0){
		printf("Numero invalido");
	}
	else {
		y = log10(x);
		printf("O log de %d e %f",x,y);
	}
	return 0;
}
