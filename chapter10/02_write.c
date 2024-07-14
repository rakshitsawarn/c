#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("harry2.txt","a");
    char num[] = "Sawarn";
    fprintf(fptr,"%s",&num);
    
    return 0;
}