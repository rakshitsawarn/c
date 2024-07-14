#include<stdio.h>
int main(){
    int i;
    i = 5;
    printf("The value of i is: %d \n",i);
    i = i+5;
    printf("The value of i is: %d \n",i);
    i++;
    printf("The value of i is: %d\n",i);
    i+=4;
    printf("The value of i is: %d\n",i);
    // i++ prints first then increments post increment operator
    // ++i increments first then prints i
}