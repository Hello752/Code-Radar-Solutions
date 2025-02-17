#include<stdio.h>
int main(){
    int num;
    int extra_factor=0;
    scanf("%d",&num);
    for (int divisor =2 ; divisor< num ; divisor = divisor+1){
        if (num% divisor ==0){
        extra_factor = extra_facor +1;
        break;
    }
    }
if(extra_factor>0){printf("Not Prime");}
else{printf("Prime");}
return 0;

 


}
