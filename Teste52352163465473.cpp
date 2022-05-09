#include<stdio.h>
#include<stdlib.h>
int main () {
	int result;
	char *result2;
	char str[100];
	FILE *fp;
	fp = fopen ("exemplo1234.txt","w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo.\n");
		exit(1);
	}
	result = fputs("kkkkkk",fp);
	if (result == EOF){
		printf("Erro na gravação. \n");
	}
	result2 = fgets(str,5,fp);
	if (result2 == NULL)
		printf("Erro na leitura. \n");
	else
		printf("%s",str);
	fclose(fp);
	return 0;
}
