//Question - 6 - Write a program to print the value of i using pointer to pointer type of variable
#include<stdio.h>
int main(){
    int i = 66;
    int*i1 = &i;
    printf("The value of i is: %d\n",i);
    printf("The value of i is: %d\n",*i1);
    return 0;
}