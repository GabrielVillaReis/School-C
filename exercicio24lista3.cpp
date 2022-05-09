#include <stdio.h>

int main () {
	
	int n, s;
	printf("\nInforme um numero inteiro");
	scanf("%d", &n);
	printf("\nO numero informado foi: %d\n", n);
	s = 1;
	for (int i=2 ; i <=(n/2.0+1); i++) {
		if ( n %i == 0) {
			printf("%d -", i);
			s += i;
		}
	}
	printf("A soma dos divisores de %d (exceto ele mesmo)\n eh %d\n", n, s);
	return 0;
		
	
}
