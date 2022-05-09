#include<stdio.h>
int main(){
	float x, y, r;
	char o;
	printf("Digite o primeiro numero,  um operador(+;-;*;/), e um segundo numero para que ele realize a operacao solicitada: \n");
	scanf("%f",&x);
	fflush(stdin);
	scanf("%c",&o);
	scanf("%f",&y);
	switch (o){
		case '+' :r = x + y;printf("%.3f + %.3f = %.3f",x, y, r);break;
		case '-' :r = x - y;printf("%.3f - %.3f = %.3f",x, y, r);break;
		case '*' :r = x * y;printf("%.3f * %.3f = %.3f",x, y, r);break;
		case '/' :r = x / y;printf("%.3f / %.3f = %.3f",x, y, r);break;
	}
	return 0;
}
