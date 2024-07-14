#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&n);
    ptr[0] = 3;
    ptr = (int *)malloc(n*sizeof(int));
    //int ar[n]; Not avaible in c
    ptr = (int *)realloc(ptr,10*sizeof(int));
    return 0;
}