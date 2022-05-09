#include <stdio.h>

void func(char str1[],char str2[]){
	int i;
	for(i=0;str1[i] != '\0';i++){
		str2[i] = str1[i];
	}
	str2[i] = '\0';
}

int main(){
	char str1[100];
	char str2[100];
	printf("Digite uma string, que o programa ira copiar essa string para uma outra, e imprimi-la na tela: \n");
	gets(str1);
	func(str1,str2);
	printf("%s",str2);
	return 0;
}

