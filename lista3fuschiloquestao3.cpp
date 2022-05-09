#include <stdio.h>
int main (){
	char str[100];
	int i;
	int a = 0, e = 0, i1 = 0, o = 0, u = 0;
	char cons;
	printf("Digite uma string de ate 100 caracteres: ");
	gets (str);
	printf("e digite uma consoante para subistituir todas as vogais: ");
	scanf ("%c",&cons);
	for(i == 0; str[i] != '\0'; i++){
		if(str[i] == 65 || str[i] == 97){
			a++;
		}
			if(str[i] == 69 || str[i] == 101){
			e++;
		}
			if(str[i] == 73 || str[i] == 105){
			i1++;
		}
			if(str[i] == 79 || str[i] == 111){
			o++;
		}
			if(str[i] == 85 || str[i] == 117){
			u++;
		}
			if(str[i] == 65 || str[i] == 97 || str[i] == 69 || str[i] == 101 || str[i] == 73 || str[i] == 105|| str[i] == 79 || str[i] == 111 || str[i] == 85 || str[i] == 117){
		str[i] = cons;
		}
		}
	printf("\nA quantidade de cada vogal e:\na: %d\n e: %d\n i: %d\n o: %d\n u: %d\n", a, e, i1, o, u);
	printf("%s",str);
	return 0;
}
