#include<stdio.h>
int main()
{
    int marks[20]; //Reserve space for storing 20 integers
    marks[0] = 45;
    marks[1] = 33;
    marks[2] = 44;
    marks[3] = 55;
    // We can go till 19
    printf("Marks are:\n%d\n%d\n%d\n%d \n",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}