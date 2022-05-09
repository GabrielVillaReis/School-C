#include <stdio.h>
#include <string.h>
int main (){
	char str1[100];
	char str2[100];
	int i1,i2,tamanho1, tamanho2;
	int num = 1;
	printf("Digite uma string de ate 100 caracters: ");
	gets(str1);
	for (i1 == 0; str1[i1] != '\0'; i1++){
	}
	tamanho1 = i1;
	for (i2 = tamanho1; i2>=0; i2--){
		strncpy(str1,str2,tamanho2);	
		strncmp(str1,str2,tamanho2);
		tamanho2++;
		if(strncmp(str1,str2,tamanho2) == 0){
			num++;
		}
	}
	if(num==tamanho2){
		printf("ka");
	}
	else{
		printf("eh o pai")
	}
	printf("%d %d",tamanho2, num);
	return 0;
}
