//Question - 7 - Try problem 3 using call by value and verify that it does not change the value of the said variable
#include<stdio.h>
//Function Prototype
int sum(int,int);
//Function Definition
int sum(int a,int b)
{
    printf("The value is: %d",a+b);
}
int main(){
    sum(2,3);
    return 0;
}