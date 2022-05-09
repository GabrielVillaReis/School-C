
#include <stdio.h>
int main () {
	int x, divs, y = 1;
	const int dn = 1;
	printf("Digite um numero inteiro: ");
	scanf("%d",&x);
	printf("%d \n",dn);
	for (divs = 2; divs <=(x/2.0+1); divs++) {
		if (x % divs == 0) {
			printf("%d \n",divs);
			y = y + divs;
			}
		}
	printf("A soma dos divisores, excluindo a si mesmo, desse numero e: %d",y);
	return 0;
	
}
