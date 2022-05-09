
#include <stdio.h>
int main () {
	int x, y, z;
	y = 2;
	x = 3;
	printf("Os 5 primeiros multiplos de 3 sao: \n");
	while (z <= (x * 5)) { 
	z = x * y;
	y++;
	printf("%d \n",z);
	}
	return 0;
}
