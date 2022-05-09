	#include <stdio.h>
	
	int main (){
		
		int mtx[5][5];
		
		int num, lin, col;
	
	printf ("\nDigite um número de 1 a 9: ");
	
	scanf ("%d", &num);
	
	for (lin = 0; lin < 5; lin++){
		
		printf ("\n");
		
		for (col = 0; col < 5; col++){
			
			if (lin < col){
				
				mtx[lin][col] = lin * 2 + col * 5 + 3;
								
				printf ("(%d)-", mtx[lin][col]);
			
			}
			
			if (lin == col){
				
				mtx[lin][col] = lin * col + num;
				
				printf ("(%d)-", mtx[lin][col]);
				
			}
			
			if (lin > col){
				
				mtx[lin][col] = 95 - (lin * 2 + col * 5 - 5);
				
				printf ("(%d)-", mtx[lin][col]);
				
			}
		}
	}
	
	return 0;
	
}
