#include<stdio.h>
int main(){
    int a = 5;
    int *a1 = &a;
    printf("The adress of a is: %u\n",&a);
    printf("The adress of a is: %u\n",a1);
    a1++;
    printf("The Value of a is: %u\n",a1);
    return 0;
}
