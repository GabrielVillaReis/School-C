#include <stdio.h>

int main() {
	
	int vet1[10], vet2[10], vet3[20], count1, count2, count3;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	printf("Digite 10 numeros:\n");
	while (count1<10){
		scanf("%d",&vet1[count1]);
		count1++;
	}
	printf("\nDigite mais 10 numeros:\n");
	while (count2<10){
		scanf("%d",&vet2[count2]);
		count2++;
	}
	printf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", vet2[0], vet1[0], vet2[1], vet1[1], vet2[2], vet1[2], vet2[3], vet1[3], vet2[4], vet1[4], vet2[5], vet1[5], vet2[6], vet1[6], vet2[7], vet1[7], vet2[8], vet1[8], vet2[9], vet1[9]);
	
	return 0;
}
