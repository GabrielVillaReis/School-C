#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado(int x){
	srand (time(NULL));
	x = (rand() % 6) + 1;
	
	return x;
}
int main(){
	int x, y, count1, count2, count3, count4, count5, count6;
	for (int countd = 0; countd < 1000000; countd++){
		printf("%d",x = Dado(x));
	}

	return 0;
}
