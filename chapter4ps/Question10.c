// Question - 10 - Find a number is prime or not using for loop

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 5; 
    for (int number = 2; number < n; number++) {
        if (is_prime(number)) {
            printf("This is a prime number: %d\n", number);
        } else {
            printf("This is not a prime number: %d\n", number);
        }
    }
    return 0;
}
