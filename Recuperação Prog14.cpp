#include <stdio.h>
int main(){
	char str[80];
	int i, b, c, d,a;
	printf("Digite uma string qualquer de ate 80 caracteres:\n\n");
	gets(str);
	for(i==0;str[i]!= '\0';i++){
		a++;
		if(str[i]==33 || str[i]==34 || str[i]>=39 && str[i]<=41 || str[i]==44 || str[i]==46 || str[i]==58 || str[i]== 59 || str[i]==63 || str[i]== 45)
			b++;
		if(str[i]>=48 && str[i]<=57)
			c++;
		if(str[i]>=97 && str[i]<=122)
			d++;
		if(str[i]==32)
			a--;
}
	b--;
	printf("\nQuantos caracteres tem o string:%d\nQuantos caracteres sao de pontuacao:%d\nQuantos caracteres sao numeros:%d\nQuantos caracteres sao minusculas:%d", a, b, c, d);
	return 0;
}
