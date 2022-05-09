
#include <stdio.h>
int main () {
	float num1, num2;
	printf("Digite 2 numeros separados por virgula para serem comparados ;) : \n");
	scanf("%f,%f",&num1,&num2);
	if(num1 > num2) {
		printf("O primeiro numero e maior que o segundo");
	}else {
		if (num1 < num2){
			printf("O primeiro numero e menor que o segundo");
		}
		else{
			printf("Os numeros sao iguais xD");
		}
	}
	return 0;
}
