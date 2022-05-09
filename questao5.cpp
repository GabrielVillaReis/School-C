#include <stdio.h>
#include <math.h>
int main () {
	char z;
	printf("Digite um dos seguintes numeros para realizar um calculo indicado:\n1: area de um quadrado \n2: area de um rentangulo \n3: area de um trapezio \n4: um numero elevado a uma potencia \n");
	scanf("%c",&z);
	switch(z) {
	case '1': float x,v; printf("\nDigite o valor do lado do quadrado:\n"); scanf("%f",&x); v = (x*x); printf("O valor da area do quadrado e: %2.f",v);break;
	case '2': float b, a, v2; printf("\nDigite o valor da base e da altura do quadrado\n"); scanf("%f%f",&b,&a); v2 = (b*a); printf("O valor da area do retangulo e: %2.f",v2);break;
	case '3': float bma, bme, at, v3; printf("\nDigite os valores respectivamente: da base maior, da base menor e da altura\n");scanf("%f%f%f",&bma,&bme,&at); v3 = ((bma+bme)/2)*at; printf("O valor da area do trapezio e: %2.f",v3);break;
	case '4': float n,v4; int p; printf("\nDigite um numero, e uma potencia para eleva-lo\n"); scanf("%f%d",&n,&p); v4 = pow (n,p); printf("O valor da potencia de %2.f elveada por %d e: %2.f",n,p,v4);break;
	default: printf("\nO numero indicado nao esta na tabela");
	}
	
	return 0;
}
