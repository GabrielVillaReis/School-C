#include <stdio.h>
#include <string.h>
int main(){
	int a,i,c,l = 0,x = 0;
	char str[20][50];
	char second[50];
	printf("Escreva ate 20 nomes separadamente, compostos por um prenome e um sobrenome separados por espaço,caso queira parar de escrever digite FIM: \n\n");
	for (a==0;a<20;a++){
	gets(str[a]);
	c++;
	l = l + strlen(str[a])-1;
	if(str[a][0] == 70 && str[a][1] == 73 && str[a][2] == 77)
		a = 20;
		c--;
	}
	l = l-2+c;
	for (a=1;a<=c;a++){
	for (i=0; str[a][i]!='0/';i++){
		if (strcmp(str[a-1],str[a]) > 0){
			strcpy (second,str[a-1]);
			strcpy (str[a-1],str[a]);
			strcpy (str[a],second);
		}
	}
}	
	for (a = 0; a <=c; a++)
   		printf("\n%s", str[a]);
   		if(a > 1)
		x = l / (a+1);
		else
		x = l / a;
  	printf("%d",l);
  	printf("%d",x);
   	return 0;
}
