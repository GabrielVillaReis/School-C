#include <stdio.h>

int EPar(int a){
	if (a%2 == 0)
	return 1;
	else
	return 0;
}


int main(){
	int num;
	printf("Dgite um numero:");
	scanf("%d",&num);
	if(EPar(num))
	printf("\nO numero e par");
	else
	printf("\nO numero e impar");
	return 0;
}
