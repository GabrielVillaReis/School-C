
#include <stdio.h>
int main () {
	float x, nros, media, y;
	printf("Digite 10 numeros para calcular a media aritmetica desses numeros: \n");
	for(nros = 0; nros < 10; nros++) {
		scanf("%f",&x);
		y = y + x;
	}
	media = y / 10;
	printf("a media dos valores e: %f ",media);
	return 0;
}
