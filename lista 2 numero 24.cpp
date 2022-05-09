
#include <stdio.h>
int main () {
	float p, x;
	const float rj = 0.15;
	const float sp = 0.12;
	const float ms = 0.08;
	const float mg = 0.07;
	char es;
	printf("Digite o valor do produto: \n");
	scanf("%f",&p);
	printf("Digite um numero para escolher um dos estados abaixo:\n 1-Rio de Janeiro \n 2-Sao Paulo \n 3-Minas Gerais \n 4-Mato Grosso do Sul \n ");
	scanf("%s",&es);
	switch (es) {
		case '1': x = p + (p * rj);printf("O valor do produto e: %.2f",x);break;
		case '2': x = p + (p * sp);printf("O valor do produto e: %.2f",x);break;
		case '3': x = p + (p * mg);printf("O valor do produto e: %.2f",x);break;
		case '4': x = p + (p * ms);printf("O valor do produto e: %.2f",x);break;
		default :printf("ERRO, esse estado nao esta nos estados possiveis!");
	}
	return 0;
}
	
