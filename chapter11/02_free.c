#include<stdio.h>
#include<stdlib.h>
int main()
{
    float n;
    float *ptr;
    scanf("%f",&n);
    float arr[n];
    scanf("%f",&n);
    ptr = (float *)calloc(n, sizeof(float));
    printf("%f",ptr[0]);
    //float ar[n]; Not avaible in c
    free(ptr);
    return 0;
}