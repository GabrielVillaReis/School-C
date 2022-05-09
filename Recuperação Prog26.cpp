#include <stdio.h>
#include <math.h>
#include <string.h>

int func (char str[],int a){
	int i, z = 0, y, e;
	int x = strlen(str)-1;
	if(a!=16){
	for(i=0; str[i]!= '\0';i++){
		if(str[i] >= 65 && str[i] <= 90)
		e = 1;
		if(str[0] == '0')
		e = 1;
	}
	}
	if(e==1)
	printf("Verifique se o numero e a base estao corretos!!");
	else{
	for(i=0; str[i]!= '\0';i++){
		if(a==16 || a==8){
		switch(str[i]){
 			case 65 : y = 10; break;		   
			case 66 : y = 11; break;
			case 67 : y = 12; break;
			case 68 : y = 13; break;
			case 69 : y = 14; break;
			case 70 : y = 15; break;
			case 48 : y = 0; break;	
			case 49 : y = 1; break;	
			case 50 : y = 2; break;	
			case 51 : y = 3; break;	
			case 52 : y = 4; break;	
			case 53 : y = 5; break;	
			case 54 : y = 6; break;	
			case 55 : y = 7; break;	
			case 56 : y = 8; break;	
			case 57 : y = 9;
			}
		if(a==16){
			z = z + y * (pow(16,x));
			x--;
			}
		if(a==8){
			z = z + y * (pow(8,x));
			x--;
			}
		}
		if(a==2){
			switch(str[i]){
				case 48: y = 0; break;
				case 49: y = 1;
			}
				z = z + y *(pow(2,x));
				x--;
		}
	}
}
	return z;
}

int main(){
	printf("Digite uma string contendo apenas numeros, e logo em seguida a base em que esse numero esta. O programa ira lhe retornaro valor do numero digitado em decimal: \n\n");
	char str[20];
	int a,z;
	gets(str);
	fflush(stdin);
	scanf("%d",&a);
	z = func(str,a);
	if (z!=0)
	printf("%d",z);
	return 0;
}
