#include <stdio.h>
#include <string.h>//necess�rio para strncpy
#include <conio.h>
int main (void)
{
  char str1[8] = "Curso C";
  char str2[5];
  
  strncpy(str2, str1, 5);
  
  str2[5] = '\0';
  printf("str2 = %s\n", str2);
  
  getch();
  return 0;
}
