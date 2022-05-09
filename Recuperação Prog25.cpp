#include <stdio.h>

int func (char str[], int x){
	int i;
	for(i=0;str[i]!= '\0';i++){
		if (str[i] == 32)
		x = i;
	}
	return x;
}

int main(){
	char str[100];
	int x;
	printf("Digite uma string, e o programa vai lhe retornar o endereco do primeiro espaco em branco dessa string: \n");
	gets(str);
	x = func(str,x);
	printf("\n%d",x);
	return 0;
}
