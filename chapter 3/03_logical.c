#include<stdio.h>
int main(){
    printf("Choose only 1 or 0 \n");
    int a,b;
    printf("Enter Number A: \n");
    scanf("%d",&a);
    printf("Enter Number B: \n");
    scanf("%d",&b);
    printf("Logical operator and result is: %d \n",a&&b);
    printf("Logical Operator or result is: %d \n",a||b);
    printf("Logical operator not(a) results as: %d",!a);
    return 0;
}