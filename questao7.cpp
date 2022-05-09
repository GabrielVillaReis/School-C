#include <stdio.h>

int main () {
	int soma = 0,mult =1, num;
	printf("Entre com um numero qualquer para somar e multiplicar por outros, o numero -1 encerra o processamento \nNumero: ");
	scanf ("%d", &num);
	while (num != -1) {
		soma = soma + num;
		mult *= num; //-> mult = mult * num;
		printf("Entre com um novo numero: ");
		scanf("%d",&num);
	}
	printf("A soma dos numeros digitados e %d \n O produto dos numeros digitados = %d",soma,mult);
	return 0;
}
