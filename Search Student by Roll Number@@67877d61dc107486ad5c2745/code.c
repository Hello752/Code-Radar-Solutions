
#include<stdio.h>


struct student{
       
    int rollnumber;
    char name[100];
    float marks;
};
    
int main(){

    int n;
    scanf("%d",&n);
    struct student s[n];
    

    for(int i=0;i<n;i++){scanf("%d %s %f",&s[i].rollnumber,&s[i].name,&s[i].marks);}

    int  search_roll;
    scanf("%d",&search_roll);
    int found=0;
    for(int i=0;i<n;i++){if(s[i].roll==search roll)
    found=1;
    break;
    }

    if(!found)
   {printf("Student not found\n");}
    return 0;
}
