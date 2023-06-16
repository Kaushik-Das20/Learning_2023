#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers to check biggest of it\n");
    scanf("%d %d", &num1, &num2);
    if(num1==num2)
    printf("%d = %d", num1, num2);
    else if(num1>num2)
    printf("%d>%d", num1, num2);
    else
    printf("%d<%d", num1, num2);
}