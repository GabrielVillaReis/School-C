#include <stdio.h>
int main(){
	float x, a;
	printf("Digite o preco de um produto:");
	scanf("%f",&x);
	a = x+(x/10);
	while(x>=100 && a<x+(x/5))
		a = x+(x/5);
	printf("%.2f",a);
	return 0;
}
