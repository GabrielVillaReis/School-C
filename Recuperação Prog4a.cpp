#include <stdio.h>
int main(){
	double f, c;
	printf("Digite a temperatura em Fahrenheit para receber a mesma em graus Celsius:\n");
	scanf("%lf",&f);
	c = (f-32.0) * (5.0/9.0);
	printf("A temperatura e %.1lf graus Celsius",c);
	return 0;
}
