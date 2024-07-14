#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int gussesnumber = 0;
    int guessed;
    printf("Generated random number: %d\n", random_number);
    do
    {
        printf("Guess The Number: ");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Lower Number Please \n");
        }
        else
        {
            printf("Higher Number Please \n");
        }
    } while (guessed != random_number);
    printf("You guessed the number in: %d guesses \n", gussesnumber);
    return 0;
}
