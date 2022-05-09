#include <stdio.h>
int main() {
	int i;
	char str[1000];
	printf("Digite uma string com palavras separadas por espacos: \n\n");
	gets(str);
	printf("\n");
	for(i==0;str[i] !='\0';i++){
		if(str[i]==32)
		printf("\n");
		else
		printf("%c", str[i]);
	}
	return 0;
}
