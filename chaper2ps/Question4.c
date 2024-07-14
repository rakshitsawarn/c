// Question - 4 - Explain step by step evaluation of 3*x/y-z*k where x=2,y=3,z=3,k=1

#include<stdio.h>
int main(){
    int x,y,z,k,evaluation;
    x = 2;
    y = 3;
    z = 3;
    k = 1;
    evaluation = 3*x/y-z*k;
    printf("The Value of Evaluation is: %d",evaluation);
    return 0;
}