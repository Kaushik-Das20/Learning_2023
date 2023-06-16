#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark of the student\n");
    scanf("%d", &mark);
    if(mark<0 || mark>100)
    printf("Wrong Entry");
    else if(mark>=90 && mark<100)
    printf("The grade is A");
    else if(mark>=75 && mark<89)
    printf("The grade is B");
    else if(mark>=60 && mark<74)
    printf("The grade is C");
    else if(mark>=50 && mark<59)
    printf("The grade is D");
    else if(mark>=0 && mark<49)
    printf("The grade is F");
}