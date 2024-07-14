#include<stdio.h>
//Function Prototype
int swap(int*,int*);
//Function Definition
int swap(int*a,int*b){
    int *c;
    *b = *c;
    *a = *b;
    *c =*a;
}
int main()
{
    int a = 4;
    int b = 6;
    swap(&a,&b);
    printf("The value of a is %d and the value of b is %d",a,b);
    return 0;
}