#include<stdio.h>
struct Student{
    int rollnumber;
    char name[100];
    float marks;
};
int main(){
    int n;
    float sum=0.0;
    struct Student students[n];
    for(int i=0;i<n;i++)
    {scanf("%d %s %f",&students[i].rollnumber,students[i].name,&students[i].marks);}
    int sum += students[i].marks;
   float average = sum/n;
   printf("Average Marks: %f",average);
   return 0;

}