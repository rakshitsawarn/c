#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt","w");
    // char c = fgetc(ptr); // For Reading in file
    // printf("%c",c);  // For Reading in file
    fputc('c',ptr); // For Writing in file
    return 0;
}