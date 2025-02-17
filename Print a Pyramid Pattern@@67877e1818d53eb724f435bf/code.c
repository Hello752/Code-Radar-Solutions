 #include<stdio.h>
  int main(){
   
   int rows;

   scanf("%d", &rows);  // 0 row --> 1 star, 1 row --> 3 star , 2 row --> 5 star   num of stars = (row index * 2) + 1

   int max_stars = [(rows - 1) * 2] + 1 ;
   int stars = 0;
   int spaces = 0;

   for(int row = 0; row < rows; row++){
     stars = (row * 2) + 1;
     spaces = (max_stars - stars) / 2;
     
     for(int space = 0; space < spaces; space++){
       printf(" ");
     }

     for(int star = 0; star < stars; star++){
       printf("*");
     }

     for(int space = 0; space < spaces; space++){
       printf(" ");
     }

   printf("\n");
     
   }
   
    
  }