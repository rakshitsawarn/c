#include<stdio.h>
int main(){
    char k = 'S';
    float s = 2.3456;
    float*s1 = &s;
    char*k1 = &k;
    printf("The Address of k is: %p \n",k);
    printf("The Address of s is: %p \n",s);
    return 0;
}