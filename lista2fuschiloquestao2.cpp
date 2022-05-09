#include <stdio.h>

int main() {
	int vet [5];
	int count, maior, menor;
	count = 0;
	printf("Digite 5 numeros:\n");
	
	while (count < 5) {
		scanf("%d",&vet[count]);
		count++;
		
	}
	if (vet [0] > vet [1] && vet [0] > vet [2] && vet [0] > vet [3] && vet [0] > vet [4]) {
		printf("\nO maior numero esta na posicao: 0\n");
	}
	if (vet [1] > vet [0] && vet [1] > vet [2] && vet [1] > vet [3] && vet [1] > vet [4]) {
		printf("\nO maior numero esta na posicao: 1\n");
	}
	if (vet [2] > vet [0] && vet [2] > vet [1] && vet [2] > vet [3] && vet [2] > vet [4]) {
		printf("\nO maior numero esta na posicao: 2\n");
	}
	if (vet [3] > vet [0] && vet [3] > vet [1] && vet [3] > vet [2] && vet [3] > vet [4]) {
		printf("\nO maior numero esta na posicao: 3\n");
	}
	if (vet [4] > vet [0] && vet [4] > vet [1] && vet [4] > vet [2] && vet [4] > vet [3]) {
		printf("\nO maior numero esta na posicao: 4\n");
	}
	if (vet [0] < vet [1] && vet [0] < vet [2] && vet [0] < vet [3] && vet [0] < vet [4]) {
		printf("\nO menor numero esta na posicao: 0\n");
	}
	if (vet [1] < vet [0] && vet [1] < vet [2] && vet [1] < vet [3] && vet [1] < vet [4]) {
		printf("\nO menor numero esta na posicao: 1\n");
	}
	if (vet [2] < vet [0] && vet [2] < vet [1] && vet [2] < vet [3] && vet [2] < vet [4]) {
		printf("\nO menor numero esta na posicao: 2\n");
	}
	if (vet [3] < vet [0] && vet [3] < vet [1] && vet [3] < vet [2] && vet [3] < vet [4]) {
		printf("\nO menor numero esta na posicao: 3\n");
	}
	if (vet [4] < vet [0] && vet [4] < vet [1] && vet [4] < vet [2] && vet [4] < vet [3]) {
		printf("\nO menor numero esta na posicao: 4\n");
	}
	return 0;
}
