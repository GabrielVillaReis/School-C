#include <stdio.h>
#include <string.h>
int main (){
	char str[100];
	int i, falta;
	printf("Digite uma string de ate 100 caracters: ");
	gets(str);
		for(i == 0; str[i] != '\0'; i++){
			str[i] = str[i] + 3;
			if (str[i] == 35){
				str[i] = 32;
			}
			if (str[i] > 122){
				falta = -(str[i] -122) +3;
				str[i] = 97;
				str[i] = str[i] + falta;
		}
	}
	printf("\nO codigo e: %s",str);
	return 0;
}
