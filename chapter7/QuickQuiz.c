#include<stdio.h>
int main()
{
    float a = 33.98;
    float*a1 = &a;
    printf("The address of a is: %u\n",&a);
    printf("The Vaddressof a is: %u\n",a1);
    a1++;
    printf("The Value of a1 is: %d\n",a1);
    printf("The Value of a1 is: %d\n",a1);
    return 0;
}