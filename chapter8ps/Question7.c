//Question - 7 - Decrypt
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    // printf("Enter your password to encrypt it: ");
    // scanf("%c",str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s",str);
    
    return 0;
}