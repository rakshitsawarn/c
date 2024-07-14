// Question - 4 - Calculate SI

#include <stdio.h>
int main()
{
    int principal, rate, interest, time, total_amount;
    principal = 100;
    rate = 10;
    time = 1;
    interest = (principal * rate * time) / 100;
    total_amount = interest + principal;
    printf("The Interest is: %d \n", interest);
    printf("The Total paid amount is: %d", total_amount);
    return 0;
}