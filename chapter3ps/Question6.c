// Question - 6 - Write a program to find greatest of four number entered by user

#include <stdio.h>

int main() {
    float number1, number2, number3, number4;
    printf("Enter Number 1: ");
    scanf("%f",&number1);
    printf("Enter Number 2: ");
    scanf("%f",&number2);
    printf("Enter Number 3: ");
    scanf("%f",&number3);
    printf("Enter Number 4: ");
    scanf("%f",&number4);
    if (number1 >= number2 && number1 >= number3 && number1 >= number4) {
        printf("Number 1 is the largest number\n");
    } else if (number2 >= number1 && number2 >= number3 && number2 >= number4) {
        printf("Number 2 is the largest number\n");
    } else if (number3 >= number1 && number3 >= number2 && number3 >= number4) {
        printf("Number 3 is the largest number\n");
    } else if (number4 >= number1 && number4 >= number2 && number4 >= number3) {
        printf("Number 4 is the largest number\n");
    } else {
        printf("All numbers are equal\n");
    }

    return 0;
}
