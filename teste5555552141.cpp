#include<stdio.h>
#include<stdlib.h>
int main () {
	FILE *arq;
	char str[20];
	int i;
	float a;
	int result;
	arq = fopen("Exemplo12345.txt","w");
	if (arq == NULL){
		printf("Problemas na abertura do aqruivo. \n");
		system ("pause");
		exit (1);
	}
	printf("Digite o seu nome, sua idade, e sua altura, separadamente: \n");
	scanf("%s",str);
	scanf("%d",&i);
	scanf("%f",&a);
	fprintf(arq, "Nome: %s\n      Idade: %d\n      Altura: %.2f",str, i, a);
	fclose(arq);
	return 0;
}
