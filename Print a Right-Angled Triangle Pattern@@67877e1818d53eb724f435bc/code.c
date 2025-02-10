#include <stdio.h>
 
int main() 
{
  int Rows, i, j;
	
  printf(" ");
  scanf("%d", &Rows);
	
  printf("");
  for ( i = 1 ; i <= Rows; i++ ) 
  {
      for ( j = 1 ; j <= i; j++ ) 
      {
          printf("* ");
      }
      printf("\n");
  }
  return 0;
}