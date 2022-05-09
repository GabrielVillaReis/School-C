#include <stdio.h>
#include <string.h>
int main (){
	char str1[100];
	char str2[100];
    char str1st[100];
	char str2nd[100];
	int i,i2;
	int tamanho1, tamanho2;
	printf("Digite uma frase, aperte enter e digite outra: ");
	gets (str1);
	gets (str2);
	tamanho1 = strlen(str1);
	tamanho2 = strlen(str2);
		for(i = tamanho1; i >= 0; i--){
			if(str1[i] == 65 || str1[i] == 97){
				str1[i] = 42;
		}
				printf("%c",str1[i]);
	}
		for(i2 = tamanho2; i2 >= 0; i2--){
			if(str2[i2] == 65 || str2[i2] == 97){
				str2[i2] = 42;
		}
		printf("%c",str2[i2]);
	}
	return 0;
}
