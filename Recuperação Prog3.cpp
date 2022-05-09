#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int  i = 0, x, q,i2,q2;
 	int r[i];
 	int r2[i2];
	printf("Digite um numero decimal para receber o equivalente em hexadecimal e octal: \n");
	scanf("%d",&x);
	if(x<10)
	printf("\nO valor %d em Hexadecimal e = %d", x, x);
	else{
 	q = x/16;
 	r[i] = x%16;
	while (q>=16){		 	     	   
		i++;				   
 	    r[i] = q%16; 
 	    q = q/16; 	      		  		    		        	      
 	}	         
    	i++;          		  
		r[i] = q;				  
 	printf ("\nO valor %d em Hexadecimal e = ", x);
 	if(x<=16)
 	switch(x){
 		case 10 : printf("A"); break;		   
		case 11 : printf("B"); break;
		case 12 : printf("C"); break;
		case 13 : printf("D"); break;
		case 14 : printf("E"); break;
		case 15 : printf("F"); break;
	 }
 	else{
 	for(i==i; i >= 0; i--){
 	 	if(r[i] >=10){
				switch(r[i]){
		   case 10 : printf("A"); break;		   
		   case 11 : printf("B"); break;
		   case 12 : printf("C"); break;
		   case 13 : printf("D"); break;
		   case 14 : printf("E"); break;
		   case 15 : printf("F"); break;
				}
			}
			else
			printf("%d", r[i]);
			}
	printf("\n\n");     
	 }
}
	printf("\nO valor %d em octal e = ", x);
	q2 = x/8;
	r2[i2] = x%8; 
	while(q2>=8){
		i2++;
		r2[i2] = q2%8;
		q2 = q2/8;
	}
		i2++;          		  
		r2[i2] = q2;
	for(i2==i2; i2 >=0; i2--){
		printf("%d", r2[i2]);
	}
	return 0;
}
