#include <stdio.h>
#include <math.h>
int main(){
	float x,y,a;
	int i;
	printf("Digite dois numeros separadamente:\n");
	scanf("%f",&x);
	scanf("%f",&y);
	for(i=0;i<7;i++){
		switch(i){
			case 1 : printf("\nA soma dos numeros e: %.3f",a = x + y);break;
			case 2 : printf("\nO produto do primeiro numero pelo quadrado do segundo e: %.3f",a = x * (y*y));break;
			case 3 : printf("\nO quadrado do primeiro numero e: %.3f",a = x * x);break;
			case 4 : printf("\nA raiz quadrada da soma dos quadrados e: %.3f",a = sqrt((x*x)+(y*y)));break;
			case 5 : printf("\nO seno da diferença do primeiro numero pelo segundo e: %.3f",a = sin((x-y)));break;
			case 6 : printf("\nO módulo do primeiro numero e: %.3f",a = sqrt((x*x)));
		}
	}
	return 0;
}




