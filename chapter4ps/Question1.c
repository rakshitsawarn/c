// Question - 1 - Write a program to print multiplication table of a given number n

#include<stdio.h>
int main(){
    int number,times;
    printf("Enter Number: ");
    scanf("%d",&number);
    times = 1;
    while (times<=10)
    {
        printf("The table is: %d \n",number*times);
        times++;
    }
    return 0;
}