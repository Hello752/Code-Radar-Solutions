#include <stdio.h>
int main()
{
    int cprice,sprice,profit;
    scanf("%d %d %d",&cprice,&sprice,&profit);
    if (sprice>cprice){
    printf("Profit");}
    else if(cprice=sprice){
    printf("No Profit No Loss");}
    else{
        printf("Loss");
    }
    return 0;
}