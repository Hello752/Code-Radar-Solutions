/**
 * C program to check Least Significant Bit (LSB) of a number using bitwise operator
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    
    scanf("%d", &num);

    /* If (num & 1) evaluates to 1 */
    if(num & 1){
        printf("Set");}
    else{
        printf("Not Set");
    }
    return 0;
}