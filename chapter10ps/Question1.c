//Question - 1 - Write a program which will read 3 integers from a file

#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Question1.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d \n",num);
    return 0;
}