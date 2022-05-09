#include <stdio.h>
#include <math.h>

int EDelta(int a, int b, int c, float x){
	x = (b*b) - (4*a*c);
	return x;
}
float ERaiz(int a, int b, float raizd, float x){
    x = ((0 - b + raizd)/(2*a));
    return x;
}
int main(){
	int a, b, c;
	float delta, raizd, raiz1, raiz2, x;
	printf("Digite 3 numeros (a, b e c respectivamente) para encontrar as raizes dessa equacao do 2 grau: \n");
	scanf("%d",&a);
	if (a == 0)
	printf("O valor de a precisa ser diferente de 0.");
	else {
	scanf("%d",&b);
	scanf("%d",&c);
	raizd = EDelta(a, b, c, delta);
	if (raizd < 0)
	printf("Nao possui raizes reais.");
	else {
	raizd = sqrt(raizd);
	raiz1 = ERaiz(a, b, raizd, x);
	raiz2 = ERaiz(a, b, -raizd, x);
	if (raiz1 == raiz2)
	printf("\n%f", raiz1);
	else
	printf("\n%f\n%f",raiz1, raiz2);
}
}
	return 0;
}
