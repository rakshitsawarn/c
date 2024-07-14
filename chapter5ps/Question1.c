//Question -1 - Write a program to find avg of three numbers use functions for this
#include<stdio.h>
//Function Prototype
int average(int,int,int);
//Function Definition
int average(int a,int b, int c){
    int initial_step = a+b+c;
    printf("The Average of the three inputted numbers are: %d",initial_step/3);
}
int main(){
    average(1,2,3);
    return 0;
}