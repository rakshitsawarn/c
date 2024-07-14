//Question - 1 - Write a perogram to print a address of a variable. Use this address to get the value of variable

#include<stdio.h>
int main()
{
    int a = 55;
    int * a1 = &a;
    printf("The address of variable a is: %p \n",(void*)a1);
    printf("The value of variable is: %d \n",*a1);
    return 0;
}