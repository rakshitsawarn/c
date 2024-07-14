#include <stdio.h>
int main()
{
    int age = -5;
    if (age >= 5)
    {
        printf("You Can't eat choclates. You are not a baby");
    }
    else if (age < 0)
    {
        printf("Hey!! You Naughty one give correct age.");
    }
    else
    {
        printf("You can eat choclates you are a baby");
    }
    return 0;

    // else block and elif block is totally optional
}
