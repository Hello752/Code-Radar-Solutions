#include<string.h>
#include<stdio.h>

    struct student{
       
        int rollnumber;
        char name[100];
        float marks;
    };
    int main(){
        int n;
        scanf("%d",&n);
        struct student students[n];\
        char name;
        for(int i=0;i<n;i++){scanf("%d %s %f",&students[i].rollnumber,&name,&student[i].marks);strcpy(students[i].name,name);}

    for(int i=0;i<n;i++){printf("Roll number:%d,Name:%s,Marks:%.2f\n",students[i].rollnumber,students[i].name,students[i].marks);}
    return 0;}
