//Question - 9 - Check a character is present in string or not
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