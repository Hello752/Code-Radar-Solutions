#include <stdio.h>
int main()
{
    
int n ,i,flag=0;
printf("Enter  a positive integer: ");
scanf("%d",&n);
if (n<=1) flag=1;
for( i=2 ; i<=n/2; ++1){
    if(n%i ==0)
    flag =1;
    break;

}
if(flag==0){ printf("Prime");
}else 
{printf("Not Prime");
}
return 0;
}