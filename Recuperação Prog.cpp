#include <stdio.h>
int main () {
	float x, a, b, c;
	printf("Digite um valor em metros para receber o mesmo valor em decimetros centimetros e milimetros \n");
	scanf("%f",&x);
	a = x * 10;
	b = x * 100;
	c = x * 1000;
	printf("\n os valores sao:\n %.3f decimetros \n %.3f centimetros \n %.3f milimetros", a, b, c);
	return 0;
}
