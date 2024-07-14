// Question - 2 - Write a program to take string from user input and confirm that the strings are equal
/*
#include<stdio.h>
#include<string.h>
int main(){
    char st[44];
    scanf("%s",&st);
    printf("Strings are here: %s",st);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[6];
    //scanf("%c", &st);
    for (int i = 0; i < 6; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    str[5] = '\0';
    printf("%s",str);
    return 0;
}
