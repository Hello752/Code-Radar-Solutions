#inlude<stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a );
    if(n>=0 && a>=0||n<=0 && a<=0){
        printf("Same Sign");
    }else {
    printf("Different Sign");
    }
    }
