#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d ",&arr[i]);
    }
    int oddcount=0;
    int evencount=0;
    for(int i=1;i<=n;i++){
      
    if(arr[i]%2==0){evencount++;}
    else{oddcount++;}
    }
    printf("%d %d",evencount,oddcount);
    return 0;

}