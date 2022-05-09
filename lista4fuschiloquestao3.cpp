#include <stdio.h>

int EDelta(int a, int b, int c, float x){
	x = (b*b) - (4*a*c);
	return x;
}

int main(){
	int a, b, c;
	float delta;
	printf("Digite 3 numeros (a, b e c respectivamente) para receber o delta deles: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	delta = EDelta(a, b, c, delta);
	printf("%f",delta);
	return 0;
}
