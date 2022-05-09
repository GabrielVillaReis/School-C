#include<stdio.h>
#include<math.h>

float Efunc(float x, float n){
	float r;
	r = pow(x,n);
	return r;
}

int main(){
	float x, y, r;
	printf("Digite 2 numeros separadamente, o segundo numero sera o expoente do primeiro:\n");
	scanf("%f",&x);
	scanf("%f",&y);
	r = Efunc(x, y);
	printf("%.3f^%.3f = %.3f",x, y, r);
	return 0;
	}
