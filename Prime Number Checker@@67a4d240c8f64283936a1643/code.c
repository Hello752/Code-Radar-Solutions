#include<stdio.h>

int  isprime(num){
    int factors = 0;
    for(int i = 2; i < num ; i++){
        if (num % i == 0){
            factors = factors + 1;
            break;
        }
    }
    if (factors > 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num ;
    scanf("%d",&num);
    printf("%d", isprime(num));
}