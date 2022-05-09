#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func(char str[]){
	if (strcmp(str,"SIM") == 0)
	return 1;
	if (strcmp(str,"NAO") == 0)
	return 0;
	else
	return 2;
}

int main(){
	char str[50];
	int x;
	printf("Digite uma string: \n");
	gets(str);
	x = func(str);
	if (x==1 || x==0)
	printf("\n%d",x);
	else
	return 0;
}
