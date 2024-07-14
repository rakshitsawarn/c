//Question - 8 - Write a program to count a occurence of given character in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    char target = 'b'; 
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            count++;
        }
    }
    printf("The character '%c' occurs %d times in the string.\n", target, count);

    return 0;
}