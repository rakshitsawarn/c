#include<stdio.h>
//Function Prototype
int sum(int,int);

// Function Definition
int sum(int x,int y){
    printf("The Sum is %d",x+y);
    return x+y;
}
int main(){
    sum(1,2);
    return 0;
}