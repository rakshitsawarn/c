#include<stdio.h>
int main(){
    char a = 'K';
    char*a1 = &a;
    printf("The address of character a is: %u\n",&a);
    printf("The address of character a is: %u\n",a1);
    a1++;
    printf("The new value of a1 is: %u \n",a1);
    return 0;
}