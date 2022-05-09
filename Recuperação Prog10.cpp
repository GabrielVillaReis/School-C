#include <stdio.h>

int main(){

	float n1,n2,m;

	do{

   		do{
            printf("Digite a primeira nota:\n");
            scanf("%f",&n1);
            if(n1 == 50){
                break;
            }
            printf("Digite a segunda nota:\n");
            scanf("%f",&n2);
            if((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 >10)){
                printf("Digite as notas novamente!\n\n");
            }
        }
		while((n1 < 0) || (n1 > 10) || (n2 < 0) || (n2 >10));
        if(n1 == 50){
            break;
        }
        m = (n1 + n2)/2;
        printf("m : %.2f\n\n",m);

    }
	while(n1 != 50);

	return 0;
}
