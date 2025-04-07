#include <stdio.h>
int main()
{
    int n, rev = 0;
   
    scanf("%d", &n);
 
    int num= n;  //To store the original number in the variable num
 
    //Reverse the number and store it in variable rev
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
 
    // check if original number is same as reversed number or not
    if (num == rev)
        printf("Yes");
    else
        printf("No");
 
    return 0;
}