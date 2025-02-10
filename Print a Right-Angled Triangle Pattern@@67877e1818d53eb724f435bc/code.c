#include <stdio.h>
 
int main() {

	// Declare Variables
    int rows,i,j;
    
    //Read Day Value
    scanf("%d",&rows);
     
    //Print Left Triangle Pattern
    for (i = 1; i <= rows; i++){
            for (j = 1; j <= i; j+++){
                printf("*");
            }
      printf("\n");
     }
   
	return 0;
}