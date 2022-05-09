#include <stdio.h>

int main(){
	float mt[3][6]; 
	int y, x, count=1;
	float simpar = 0, m, s2;
	printf("\nDigite os valores da matriz:\n");
	for (y=0;y<6;y++){
		for(x=0;x<3;x++){
			scanf("%f",&mt[y][x]);
		}
	}
	for (y=0;y<6;y++){
		for(x=0;x<3;x++){
			printf("%0.f ",mt[y][x]);
			if(x % 2 != 0){
				simpar = simpar + mt[y][x];
			}
		}
		printf("\n");
	}
		for (y=0;y<6;y++){
		for(x=0;x<3;x++){
			if(x == 2 || x== 4){
				s2 = s2 + mt[y][x];
				count++;
			}
		}
	}
	m = s2/count;
	printf("\nA soma eh:%f",simpar);
	printf("\nA media das colunas 2 e 4 eh:%f ",m);
	return 0;
}
