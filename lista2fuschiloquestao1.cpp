#include <stdio.h>

int main () {
	
	int vet[6];
	int soma;
	
	vet[0] = 1;
	vet[1] = 0;
	vet[2] = 5;
	vet[3] = -2;
	vet[4] = -5;
	vet[5] = 7;
	
	soma = vet[0] + vet [1] + vet[5];
	
	printf("Soma = %d\n\n",soma);
	
	vet [3] = 100;
	
	printf("Os valores de cada vet sao:\n \nvet[0]=%d \nvet[1]=%d \nvet[2]=%d \nvet[3]=%d \nvet[4]=%d \nvet[5]=%d",vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
	
	return 0;
}
