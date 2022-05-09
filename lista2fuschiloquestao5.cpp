#include <stdio.h>
#include <math.h>

int main()
{
	int mt[10][10], y, x;
	for (y=0;y<10;y++){
		printf("\n");
		for(x=0;x<10;x++){
			mt[y][x]= 1;
			if (y<x){
				mt[y][x]= (2*y) + (7*x) - 2;
				printf("%d ",mt[y][x]);
			}
			if (y==x){
				mt[y][x] = (3*(pow(y,2))) -1;
				printf("%d ",mt[y][x]);
			}
			if (y>x){
				mt[y][x] = (4*(pow(y,3))) - (5*(pow(x,2))) + 1;
				printf("%d ",mt[y][x]);
			}
	}
	printf("\n");
	}
	return 0;
}
