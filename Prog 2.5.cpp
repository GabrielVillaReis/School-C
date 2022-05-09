#include <stdio.h>
#include <math.h>

int main (){
	
	int mtz[10][10];
	
	int lin = 0, col = 0;
	
	for (lin = 0; lin < 10; lin++){
		
		printf ("\n");
		
		for (col = 0; col < 10; col++){
			
			if (lin < col){
				mtz[lin][col] = 2 * lin + 7 * col - 2;
				printf ("(%d)-", mtz[lin][col]);
			}
			
			if (lin == col){
				
				mtz[lin][col] = 3 * pow(lin, 2) - 1;
				
				printf ("(%d)-", mtz[lin][col]);
			}
			
			if (lin > col){
				
				mtz[lin][col] = 4 * pow (lin, 3) - 5 * pow(col, 2) + 1;
				
				printf ("(%d)-", mtz[lin][col]);
			}
		}
	}
	
	return 0;
	
}
