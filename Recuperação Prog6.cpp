#include <stdio.h>
int main(){
	int x, y, i;
	printf("Digite 2 valores separadamente: \n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("\nOs valores sao: ");
	if(x<y){
		for(i=x;i<=y;i++)
			printf("%d; ",i);
	}
	if(x>y){
		for(i=x;i>=y;i--)
		printf("%d; ",i);
	}
	if(x==y)
		printf("valores iguais");
		return 0;
}
