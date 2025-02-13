#incluude<stdio.h>
int main(){
    int a,b,c;
    if ('a'=='b' && 'b=='c' && 'a'=='c'){printf("Equilateral")} ;
    else if('a'=='b' &&'a'=='c' &&'b'=='c'){printf("Isoceles");}
    else{printf("Scalene");}
}