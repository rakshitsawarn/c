//Question - 6 - Write a program and encrypt a string by adding one to its ascii value

#include<stdio.h>
#include<string.h>
int main()
{
    char str[33];
    printf("Enter your password to encrypt it: ");
    scanf("%c",str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s",str);
    
    return 0;
}