#include<stdio.h>
// Pointer is a variable which stores address of another variable
int main(){
    int i = 72;
    int*j = &i;
    printf("The address of i is:%p",i);
    return 0;
}