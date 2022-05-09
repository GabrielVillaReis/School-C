#include <stdio.h>

int ENulo(int a){
	if (a == 0)
	return 1;
	else
	return 0;
	
}

int main(){
	int num;
	printf("Digite um numero:");
	scanf("%d",&num);
	if(ENulo(num))
	printf("\nO numero e nulo");
	else
	printf("\nO numero nao e nulo");
	return 0;
}
