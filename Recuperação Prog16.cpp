#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i;
	printf("Entre com uma string:\n");
	gets(str);
	printf("\n");
	printf("%s",str);
	printf("\n");
	for (i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
