// Question - 4 - Slice string by using slice method
#include <stdio.h>
#include <string.h>
void slice(char str[], int start, int end, char result[]) {
    int j = 0;
    for (int i = start; i < end && str[i] != '\0'; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0'; 
}

int main() {
    char st[] = "Rakshit";
    char sliced[100]; 
    slice(st, 1, 5, sliced);
    printf("Slicing: %s\n", sliced);
    return 0;
}
