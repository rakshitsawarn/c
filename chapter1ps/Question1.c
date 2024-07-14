// Question - 1(a) - Write C program for finding area of rectangle using hard coded input
#include <stdio.h>
int main()
{
    int length = 10;
    int breadth = 20;
    int area = (length * breadth);
    printf("The area of rectangle is %d", area);
    return 0;
}

// Question - 1(b) - Write C program for finding area of rectangle using user input
#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float area = (length * breadth);
    printf("Enter the Length of Rectangle: ");
    scanf("%f", &length);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%f", &breadth);
    printf("The Area of Rectangle is %f:", area);
    return 0;
}