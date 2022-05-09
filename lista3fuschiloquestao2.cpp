#include <stdio.h>
int main (){
	char str[100];
	int i;
	int uns = 0;
	printf("Digite uma string de ate 100 caracteres: \n");
	gets (str);
	for(i == 0; str[i] != '\0'; i++){
		if(str[i] == 49){
			uns++;
		}
		else{
		}
	}
	printf("%d", uns);
}
