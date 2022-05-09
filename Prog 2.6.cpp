#include <stdio.h>

int main (){
	
	float mtx[3][6];
	
	float soma1, soma3, soma5, media2, media4;
	
	printf ("\nDigite 18 numeros separados por virgula: ");
	
	scanf ("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f", &mtx[0][0], &mtx[0][1], &mtx[0][2], &mtx[0][3], &mtx[0][4], &mtx[0][5], &mtx[1][0], &mtx[1][1], &mtx[1][2], &mtx[1][3], &mtx[1][4], &mtx[1][5], &mtx[2][0], &mtx[2][1], &mtx[2][2], &mtx[2][3], &mtx[2][4], &mtx[2][5]);
	
	soma1 = mtx[0][0] + mtx[1][0] + mtx[2][0];
	soma3 = mtx[0][2] + mtx[1][2] + mtx[2][2];
	soma5 = mtx[0][4] + mtx[1][4] + mtx[2][4];
	
	printf ("\nA soma das colunas 1, 3 e 5, respectivamente, eh: %f, %f e %f", soma1, soma3, soma5);
	
	media2 = (mtx[0][1] + mtx[1][1] + mtx[2][1]) / 3;
	media4 = (mtx[0][3] + mtx[1][3] + mtx[2][3]) / 3;
	
	printf ("\nA media aritmetica das colunas 2 e 4, respectivamente, eh: %f e %f", media2, media4);
	
	mtx[0][5] = mtx[0][1] + mtx[0][3];
	mtx[1][5] = mtx[1][1] + mtx[1][3];
	mtx[2][5] = mtx[2][1] + mtx[2][3];
	
	printf ("\n\n%f, %f, %f, %f, %f, %f,\n%f, %f, %f, %f, %f, %f,\n%f, %f, %f, %f, %f, %f.", mtx[0][0], mtx[0][1], mtx[0][2], mtx[0][3], mtx[0][4], mtx[0][5], mtx[1][0], mtx[1][1], mtx[1][2], mtx[1][3], mtx[1][4], mtx[1][5], mtx[2][0], mtx[2][1], mtx[2][2], mtx[2][3], mtx[2][4], mtx[2][5]);
	
	return 0;
	
}
