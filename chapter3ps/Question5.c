// Question - 5 - Check the character entered by user is lower case or not
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if (islower(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is not a lowercase letter.\n", ch);
    }

    return 0;
}
