#include <stdio.h>
int main () {
	int x, n;
	printf("Digite um numero inteiro para receber os seus 20 sucessores e antecessores\n");
	scanf("%d",&x);
	n = x - 20;
	while( n < x + 21 ) {
		printf("%d  ",n);
		n++;
	}
	return 0;
}	
