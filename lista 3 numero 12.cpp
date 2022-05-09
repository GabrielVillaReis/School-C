
#include <stdio.h>
int main () {
	int x, y = 0, z;
	printf("digite um numero natural positivo: \n");
	scanf("%d",&x);
	if (x <= 0) {
		printf("Numero invalido!");
		}
		else {
			for(z = 0; z < x; z++); {
				while(y <= x){
			printf("%d \n",y);
			y++;
			}
		}
	return 0;
	}	
}
