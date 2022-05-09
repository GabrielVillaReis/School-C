#include <stdio.h>
int main () {
	int x, y, q;
	printf("Digite um numero natural:\n");
	y = 0;
	q = 0;
	scanf("%d",&x);
	while(x >= 0) {
		y = y + x;
		q++;
		printf("\nSoma:%d e quantidade:%d\nDigite um numero natural:\n",y, q);
		scanf("%d",&x);
		if(x < 0) {
			printf("\nSoma:%d e quantidade:%d",y, q);
		}
	}
	return 0;
}
