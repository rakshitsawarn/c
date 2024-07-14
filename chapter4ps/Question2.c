// Question - 2 - Write amultiplication table of 10 in reversed order

#include <stdio.h>
int main()
{
    int number, times;
    number = 10;
    times = 10;
    for (number; times; times--)
    {
        printf("The Multiplication table in reverse of 10 is: %d \n", number * times);
    }

    return 0;
}