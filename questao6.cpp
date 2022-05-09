#include <stdio.h>
int main () {
	float a,p,imc;
	char x;
	printf("Digite a sua altura e logo em seguida o seu peso para calcular o seu imc:\n");
	scanf("%f%f",&a,&p);
	imc = p/(a*a);
	if (imc<=18.5) {
		printf("\nVoce esta abaixo do peso normal\n");
	}
		else if (imc>18.5, imc<=25) {
		printf("\nVoce esta com o peso normal\n");
	}
		else if (imc>25, imc<=30) {
		printf("\nVoce esta acima do peso normal\n");
	}
		else if (imc>30) {
		printf("\nVoce esta com o peso excessivo\n");
		
	}
	
	return 0;	
}
