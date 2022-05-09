#include<stdio.h>
#include<stdlib.h>
int main () {
	FILE *arq;
	char linha[50];
	char nome[30];
	char data[10];
	int tel;
	int count = 1;
	int k = 1;
	arq = fopen("Contatos.txt","a");
	if (arq == NULL){
		printf("Problemas na abertura do aqruivo. \n");
		system ("pause");
		exit (1);
	}
	while (count == 1){
	printf("\nDigite o nome da pessoa, o seu numero de telefone, e sua data de aniversário para armazenar no arquivo contatos.txt: \n");
	gets(nome);
	scanf("%d",&tel);
	scanf("%s",data);
	fprintf(arq,"%s     %d     %s\n",nome, tel,data);
	printf("\nDigite 1 para continuar salvando mais contatos, ou 2 para finalizar:");
	scanf("%d",&count);
	}
	fclose(arq);
	arq = fopen("Contatos.txt","r");
	while (1){
		fgets(linha,50,arq);
		if(feof(arq))
		break;
		printf("\n%s",linha);
		printf("\n");
	}
	fclose(arq);
	return 0;
}
