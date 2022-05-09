#include <stdio.h>

void func(char str[], char x){
	int i;
	for(i=0;str[i]!='\0';i++){
		if (str[i] != x)
		printf("%c",str[i]);
	}
}

int main(){
	char str[100];
	char x;
	int i;
	printf("Digite uma string, e logo em seguida, um caracter para ser removido de toda essa string: \n");
	gets(str);
	fflush(stdin);
	scanf("%c",&x);
	func(str,x);
	return 0;
}
