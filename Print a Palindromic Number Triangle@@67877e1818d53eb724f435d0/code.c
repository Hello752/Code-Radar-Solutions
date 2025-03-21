#include<stdio.h>
int main(){
    int row,i,j,space;
    scanf("5d",&rows);
    for(i=1;i<=rows;i++)
    {for(space=1;space<=rows-1;space++){printf(" ");}}
    for(j=1;j<=i;j++){printf("%d",j);}
    for(j=i-1;j>=1;j--){printf("%d,j");}
printf("\n");
return 0;
}
