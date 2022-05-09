
#include <stdio.h>
int main(){
	float x, nros, xmaior = 0, y, ymaior = 0;
	printf("digite quantos numeros voce queira digitar \n");
	scanf("%f",&y);
	printf("Agora digite os numeros que voce deseje dentra da quantidade estabelecida \n");
	for(nros = 0; nros < y; nros++) {
		scanf("%f",&x);
		if (x > xmaior) {
			xmaior = x;
			ymaior = 0;
		
		}
		if (x <= xmaior);
		ymaior = ymaior + 1;
	}
	printf("O maior numero e: %f , e a quantidade de numeros e: %f",xmaior, ymaior);
	return 0;
}
