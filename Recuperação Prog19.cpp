#include <stdio.h>
#include <string.h>
void func(char str[]){
	int x;
	int i;
	if (strcmp(str,"")!= 0)
	x = 1;
	for (i==0;str[i]!='\0';i++){
		if(str[i]==32)
		x++;
	}
	printf("\nForam digitadas %d palavras",x);
}

int main(){
	char str[100];
	printf("Digite uma serie de palavras (ou uma frase) separadas por espacos: \n");
	gets(str);
	func(str);
	return 0;
}
