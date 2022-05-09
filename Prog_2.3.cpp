#include <stdio.h>

int main (){
	
	int Vet[10];
	int VEt[10];
	int VET[20];
	
	printf ("\nDigite 10 numeros entre virgulas: ");
	
	scanf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &Vet[0], &Vet[1], &Vet[2], &Vet[3], &Vet[4], &Vet[5], &Vet[6], &Vet[7], &Vet[8], &Vet[9]);
	
	printf ("\nDigite mais 10 numeros entre virgulas: ");
	
	scanf ("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &VEt[0], &VEt[1], &VEt[2], &VEt[3], &VEt[4], &VEt[5], &VEt[6], &VEt[7], &VEt[8], &VEt[9]);
	
	printf ("VET[20] = {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}", VEt[0], Vet[0], VEt[1], Vet[1], VEt[2], Vet[2], VEt[3], Vet[3], VEt[4], Vet[4], VEt[5], Vet[5], VEt[6], Vet[6], VEt[7], Vet[7], VEt[8], Vet[8], VEt[9], Vet[9]);
	
	return 0;
	
}
	
	
