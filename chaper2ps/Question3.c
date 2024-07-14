// Question - 3 - Write a program to check whether a number is divisiable by 97 or not

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    int number = 97;
    int divisiable = a%number;
    printf("The Remainder is: %d",divisiable);
    return 0;
}