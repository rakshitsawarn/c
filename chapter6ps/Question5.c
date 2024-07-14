//Question 5 - Write a function which calculates sum and average of two numbers.Use pointers and print the value of sum and average in main()
#include <stdio.h>
void sum_and_average(int* a, int* b, int* sum, float* avg) {
    *sum = *a + *b;
    *avg = (float)(*sum) / 2;
}

int main() {
    int x = 2; 
    int y = 3;
    int sum;
    float average;
    sum_and_average(&x, &y, &sum, &average);
    printf("The Sum of given values is: %d\n", sum);
    printf("The Average of given values is: %.2f\n", average);

    return 0;
}