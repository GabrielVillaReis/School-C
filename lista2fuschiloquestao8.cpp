#include <stdio.h>

int main (){
	int mt[5][5];
	int y, x, num;
	printf ("\nDigite um numero de 1 a 9: ");
	scanf ("%d", &num);
	for (y = 0; y < 5; y++){
		printf ("\n");
		for (x = 0; x < 5; x++){
			if (y < x){
				mt[y][x] = y * 2 + x * 5 + 9;	
				printf ("%d  ", mt[y][x]);
			}
			if (y == x){
				mt[y][x] = y * x + num;
				
				printf ("%d  ", mt[y][x]);
			}
			
			if (y > x){
				mt[y][x] = 95 - (y * 2 + x * 5);
				printf ("%d  ", mt[y][x]);	
			}
		}
	}
	return 0;
	
}
