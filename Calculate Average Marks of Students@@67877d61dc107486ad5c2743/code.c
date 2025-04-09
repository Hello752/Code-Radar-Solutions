#include<stdio.h>
struct Students{
    int rollnumber;
    char name[100];
    float marks;
};
int main(){
    int n;
    float sum=0.0;
    struct Student students[n];
    for(int i=0;i<n;i++)
    {scanf("%d %c %f",&students[i].rollnumber,students[i].name,&students[i].marks);}
    sum+=students[i].marks;
   float average=sum/n;
   printf("%.2f\n",average);
   return 0;

}