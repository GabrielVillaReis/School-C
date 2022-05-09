#include <stdio.h>
int main(){
	char str[50];
	int i;
	printf("Digite um numero inteiro, para que o programa soletre os algarismos dele: \n\n");
	gets(str);
	printf("\n");
	for (i=0;str[i]!='\0';i++){
		switch(str[i]){
			case 48 : printf("zero");break;
			case 49 : printf("um");break;
			case 50 : printf("dois");break;
			case 51 : printf("tres");break;
			case 52 : printf("quatro");break;
			case 53 : printf("cinco");break;
			case 54 : printf("seis");break;
			case 55 : printf("sete");break;
			case 56 : printf("oito");break;
			case 57 : printf("nove");break;
		}
		i++;
		if(str[i]!='\0')
		printf(", ");
		i--;
	}
	return 0;
}
