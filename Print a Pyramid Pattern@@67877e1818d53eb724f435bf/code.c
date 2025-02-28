 #include<stdio.h>
  int main(){
   
   int rows,i,j,space;
   printf("");
   scanf("%d", &rows);  // 0 row --> 1 star, 1 row --> 3 star , 2 row --> 5 star   num of stars = (row index * 2) + 1
  for(i-1; i<=rows;i++){
    for (space=1; space<=rows -i;space++){
        printf(" ");
    }
    for (j=1;j<=(2*i-1);j++){
        printf("*");
    }
    printf("\n");
  }
   return 0;
     
  }