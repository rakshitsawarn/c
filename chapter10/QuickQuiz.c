#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt", "r");
    int num;
    if (ptr == NULL)
    {
        printf("File doesnot exist...");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
    }
    fclose(ptr);
    return 0;
}