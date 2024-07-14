#include<stdio.h>
//Function Prototype
int sum(int*,int*);
//Function Definition
int sum(int*a,int*b)
{
    *a = 19;
    return *a + *b;
}
int main()
{
    int x = 5;
    int y = 4;
    printf("The value is: %d",sum(&x,&y));
    return 0;

    //In this we are using address
}