#include <stdio.h>
int main (){
	char str[100];
	int i, c;
	printf("Digite um string de ate 100 caracteres: ");
	gets (str);
	for(i == 0; str[i] != '\0'; i++){
		while (str[i] >= 97){
			str[i] = str[i] - 32;
		}
	}
	printf("%s",str);
	return 0;
}
