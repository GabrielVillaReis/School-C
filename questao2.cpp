#include <stdio.h>
int main () {
	char op;
	float r, x;
	printf("Digite 2 numeros: o primeiro para indicar o tipo de operecao que voce deseja fazer, e o segundo para indicar o valor do raio da circunferencia\n\n");
	printf("Digite 1 para calcular o valor da area da circunferencia, e 2 para calcular o perimetro da circunferencia\n");
	scanf("%c%f",&op,&r);
	switch (op) {
		case '1': x = 3.14 * (r * r); printf("O valor da area da circunferencia e:\n %.3f",x);break;
		case '2': x = 6.28 * r; printf("O valor do perimetro da circunferencia e:\n %.3f",x);break;
		default: printf("O valor de operacao selecionado nao existe");
	}
	return 0;
}






