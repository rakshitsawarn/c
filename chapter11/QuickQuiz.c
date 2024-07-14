#include<stdio.h>
#include<stdlib.h>
int main()
{
    float n;
    float *ptr;
    scanf("%f",&n);
    float arr[n];
    scanf("%f",&n);
    ptr = (float *)malloc(n*sizeof(float));
    //float ar[n]; Not avaible in c
    return 0;
}