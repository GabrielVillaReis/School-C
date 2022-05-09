#include <stdio.h>
#include <math.h>
int main(){
	float x,y,s,p,q,r,sen,m;
	printf("Digite dois numeros separadamente:\n");
	scanf("%f",&x);
	scanf("%f",&y);
	s = x + y;
	p = x * (y*y);
	q = x * x;
	r = sqrt((x*x)+(y*y));
	sen = sin((x - y));
	m = sqrt((x*x));
	
	printf("\nA soma dos numeros e: %f\nO produto do primeiro numero pelo quadrado do segundo e: %f\nO quadrado do primeiro numero e: %f\nA raiz quadrada da soma dos quadrados e: %f\nO seno da diferença do primeiro numero pelo segundo e: %f\nO módulo do primeiro numero e: %f", s, p, q, r, sen, m);
}
