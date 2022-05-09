#include <stdio.h>

int main()
{
	int mt[4][4], y, x;

	for(y=0;y<4;y++) {
    for(x=0;x<4;x++) {
        mt[y][x] = (y+1)*(x+1);
        printf("%d ",mt[y][x]);
    }
    printf("\n");
  }

  return 0;
}
