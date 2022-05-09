#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[ ] )
{
  int result, valorA=0, valorB=0;
  valorA = atoi(argv[1]);
  valorB = atoi(argv[2]);
  result = valorA * valorB;
  printf("\n%d X %d = %d\n",valorA,valorB,result);
  return 0;
}
