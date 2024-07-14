// Question - 3 - A do while loop is executed
// optioan (a) - atleast once -- Correct Answer
// option (b) - Atleast twice
// option (c) - Atleast thrice

#include<stdio.h>
int main(){
    int i;
    i = 9;
    do
    {
        printf("The Value of i is: %d",i);
    } while (i>10);
    return 0;
}