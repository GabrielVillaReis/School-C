#include <stdio.h>
#include <string.h>
int main (){
	char str1[100];
	char str2[100];
	int i1;
	printf("Digite uma string de ate 100 caracters: ");
	gets(str1);
	for (i1 == 0; str1[i1] != '\0'; i1++){
	}
	strcpy (str2,str1);
	strrev (str2);
	if (strcmp(str2,str1) == 0){
		printf("Essa palavra e um polindromo");
	}
	else
	printf("Essa palavra nao e um polindromo");
	return 0;
}
