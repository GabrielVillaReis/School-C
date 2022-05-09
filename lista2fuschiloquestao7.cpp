#include <stdio.h>
#include <stdlib.h>
int main(){
		float mt[100][100];
	int  y, x, p1, p2, p3;
	for(y=0;y<10;y++){
		for(x=0;x<3;x++){
			printf("Digite a nota da prova %d:", x);
			scanf("%f", &mt[y][x]);
		}
	}
	for(y=0;y<10;y++){
		for(x=0;x<3;x++){
			if(x==0){
				if(mt[y][x]-mt[y][1]-mt[y][2]<0){
					p1++;
				}
			}
			else if(x==1){
				if(mt[y][x]-mt[y][0]-mt[y][2]<0){
					if(mt[y][x]-mt[y][1]-mt[y][2]<0){
						continue;
					}
					else{
						p2++;
					}
				}
			}
			else if(x==2){
				if(mt[y][x]-mt[y][0]-mt[y][1]<0){
					if(mt[y][x]-mt[y][1]-mt[y][2]<0){
						continue;
					}
					if(mt[y][x]-mt[y][0]-mt[y][2]<0){
						continue;
					}
					else{
						p3++;	
					}
				}
			}
		}  
	}
	printf("Prova 1: %d Prova 2: %d Prova 3: %d \n", p1, p2, p3);
	return 0;
}
