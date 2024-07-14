#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Number: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("You Entered 1 \n");
        break;
    case 2:
        printf("You Entered 2 \n");
        break;
    case 3:
        printf("You Entered 3 \n");
        break;
    case 4:
        printf("You Entered 4 \n");
        break;
    case 5:
        printf("You Entered 5 \n");
        break;
    default:
        printf("Doesn't matched anything\n");
        break;
    }
    return 0;
}