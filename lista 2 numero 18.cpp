
#include <stdio.h>
int main() {
	char op;
	int x,y,z;
	printf("Digite uma operação entre as seguintes: (+),(-),(*),(:):");
	scanf("%c",&op);
	printf("Digite 2 numeros para executarem a operacao desejada: \n");
	scanf("%d",&x);
	scanf("%d",&y);
	switch(op) {
		case '+':z = x + y;printf("O resultado e: %d",z);break;
		case '-':z = x - y;printf("O resultado e: %d",z);break;
		case '*':z = x * y;printf("O resultado e: %d",z);break;
		case ':':z = x / y;printf("O resultado e: %d",z);break;
		default :printf("%c nao esta listado nas operacoes permitidas",op);
	}
	return 0;
}
