#include<string.h>
#include<stdio.h>

    
    int main(){

        struct student{
       
            int rollnumber;
            char name[100];
            float marks;
        };
        int n;
        scanf("%d",&n);
        struct student students[n];
        char nam[10];
        for(int i=0;i<n;i++){scanf("%d %s %f",&students[i].rollnumber,&nam,&students[i].marks);strcpy(students[i].name,nam);}

        for(int i=0;i<n;i++){printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollnumber,students[i].name,students[i].marks);}
        return 0;
    }
