//Write a program to change the value of a variable to ten times for its current value
#include<stdio.h>
//Function Prototype
int sum(int*,int*);
//Function Definition
int sum(int* a, int* b){
    *a = 30;
    printf("The sum is %d",*a+*b);
}
int main()
{
    int x = 3;
    int y = 5;
    sum(&x,&y);
    return 0;
}