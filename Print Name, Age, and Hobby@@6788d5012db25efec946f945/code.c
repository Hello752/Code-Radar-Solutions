#include <stdio.h>

int main() {
    char name[100] ;
    int age;
    char hobby[100];
    scanf("%s %d %s",&name , &age,& hobby);
    printf("Name : %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
}