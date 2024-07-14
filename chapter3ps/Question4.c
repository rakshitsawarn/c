// Question - 4 - Take user input year and tell whether it is leap or not

#include<stdio.h>
int main(){
    int year;
    printf("Enter year you want to check: ");
    scanf("%d",year);
    if(year%4==0){
        printf("It is a leap year");
    } else if(year%100 == 0 && year %400 == 0){
        printf("It is a leap year");
    } else{
        printf("It is a normal year");
    }
    return 0;
}