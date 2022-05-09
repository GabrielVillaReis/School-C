#include<stdio.h>
#include<stdlib.h>

char EFunc(int i, int imax, char str[100], int x){
	gets(str);
	return str[100];
}

int main(){
	int i, imax, x;
	char str[i];
	printf("Digite qual o tamanho do vetor desejado:");
	scanf("%d",imax);
	str[imax] = EFunc(i, imax, str, x);
	printf("%s",str);
}
