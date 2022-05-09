#include <stdio.h>
#include <string.h>
int main(){
	char str[500] = "Seu nome eh ";
	char str1[11] = " voce tem ";
	char str2[20] = " anos, mora na rua ";
	char str3[19] = " e seu telefone eh ";
	char nome[50];
	char endereco[100];
	char idade[4];
	char tel[20];
	printf("Qual e o seu nome?\n");
	gets(nome);
	printf("\nQual o seu endereco?\n");
	gets(endereco);
	printf("\nQual o seu telefone?\n");
	scanf("%s",tel);
	printf("\nQual a sua idade?\n");
	scanf("%s",idade);
	strcat(str,nome);
	strcat(str,str1);
	strcat(str,idade);
	strcat(str,str2);
	strcat(str,endereco);
	strcat(str,str3);
	strcat(str,tel);
	printf("\n%s",str);
}
