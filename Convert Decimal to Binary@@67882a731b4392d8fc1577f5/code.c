#include<stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int rem = 0;
  int quot = -1;
  int binary_num = 0;

  // convert n into binary representation

  while(quot != 0){
    rem = n % 2;
    quot = n / 2;
     n = n / 2;

    binary_num = binary_num * 10 + rem;
  }

  // reverse binary_num

  int newbinary_num = 0;
  int digit = 0;
  while(binary_num > 0){

    digit = newbinary_num % 10;
    binary_num = binary_num / 10;
    newbinary_num = newbinary_num * 10 + digit;
  }

  printf("%d", newbinary_num);
}