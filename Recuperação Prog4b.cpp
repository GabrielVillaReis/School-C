#include <stdio.h>
int main(){
	int f, c;
	printf("Digite a temperatura em Fahrenheit para receber a mesma em graus Celsius: ");
	scanf("%d",&f);
	c = f-32;
	c = c*5/9;
	printf("A temperatura e %d graus Celsius",c);
	return 0;
}
