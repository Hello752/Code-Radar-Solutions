#include<stdio.h>
int main() {
    strut student{
        char n[100];
        float marks;
    };
    int main(){
        int n;
        scanf("%d",&n);
        struct student students[n];
        for(int i=0;i<n;i++){scanf("%d %f %s",&students[i].rollnumber,students[i].name,&student[i].marks);
    }
    for(int i=0;i<n;i++){printf("Roll number:%d,Name:%s,Marks:%.2f\n",students[i].rollnumber,students[i].name,students[i].marks);}
    return 0;}
}