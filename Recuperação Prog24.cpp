#include <stdio.h>
#include <string.h>

void func(char str[], char x,int a){
	int i;
	for(i=strlen(str)+1;i>a;i--){
			str[i] = str[i-1];
			
		}
		str[a] = x;
	}


int main(){
	char str[100];
	char x;
	int a;
	printf("Digite uma string, logo depois uma posicao da string para que um caractere escolhido (apos a posicao) seja alocado no lugar desejado: \n\n");
	gets(str);
	scanf("%d",&a);
	fflush(stdin);
	scanf("%c",&x);
	func(str,x,a);
	printf("%s",str);
	return 0;
}
