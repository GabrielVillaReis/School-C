#include<stdio.h>
#include <stdio.h>

int opcoes(int e){
    printf("Escolha uma das formas de pagamento abaixo, digitando o numero indicado: \n");
    printf("1: A vista com 10 porcento de desconto.\n");
    printf("2: Em duas vezes.\n");
    printf("3: Em 3 ate 10 vezes com juros de 3 porcento ao mes (somente compras acima de R$ 100,00).\n\n");
    scanf("%d",&e);
    return(e);
}

float op1(float x){
	x = x * 0.9;
    printf("\nValor a ser pago: R$%.2f.\n", x);
    return(0);
}

float op2(float x){
	x = x/2;
    printf("\nValor a ser pago em 2 parcelas: R$%.2f cada.\n", x);
    return(0);
}

float op3(float x, int p){
        printf("\nDigite a quantidade de parcelas desejada:\n");
        scanf("%d",&p);
		if (p<=10 && p>=3){
		x = (x/p) * 1.03;
    printf("\nValor a ser pago em %d parcelas: R$%.2f cada.\n", p, x);
}
    else
    printf("\nO numero de parcelas desejadas nao esta entre a permitida(3 ate 10 parcelas)");
    return(0);
}
int main(){
	float x;
	int e, p;
	printf("Digite o valor da compra:");
	scanf("%f",&x);
	switch(opcoes(e)){
		case 1: op1(x);break;
		case 2: op2(x);break;
		case 3: if(x<=100)
		printf("\nEssa opcao so e permitida em compras acima de R$100,00.");
		else
		op3(x,p);
		
	}
	return 0;
}
