#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado(int x){
	srand (time(NULL));
	x = (rand() % 6) + 1;
	return x;
}
int main(){
	int x, a;
	x = Dado(x);
	printf("%d\n",x);
	return 0;
}
