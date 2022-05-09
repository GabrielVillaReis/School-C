#include <stdio.h>
int main() {
	
	int e, p;
	printf("Digite o numero de produtos a ser fornecidos, e o numero de produtos disponiveis, para verificar a disponibilidade no estoque\n");
	scanf("%d%d",&p,&e);
	if (e >= p){
	printf("Apos o forncecimento dos produtos, o valor do estoque sera %d",e-p);
	}
	else {
		printf("O estoque nao e suficiente para suprir a necessidade de produtos fornecidos");
	}
	return 0;
}
