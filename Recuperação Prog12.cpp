#include <stdio.h>

double fatoriallac(int x){
	double fat;
	if (x <= 1)
	return 1;
	else
	return x * fatoriallac(x - 1);
	
}
double fatorialrec(int x){
	double fat;
  for(fat=1;x>1;x = x-1){
      fat = fat * x;
  }

  return fat;
	
}

int main(){
	float x;
	double fat;
	printf("Digite um numero para receber o fatorial do mesmo: \n");
	scanf("%f",&x);
	printf("Uilizando versao recursiva :Fatorial = %.0f\n\n",fatorialrec(x));
	printf("Uilizando versao de laco :Fatorial = %.0f\n\n",fatoriallac(x));
	return 0;
}
