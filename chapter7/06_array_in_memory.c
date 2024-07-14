#include<stdio.h>
int main()
{
    int marks[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Marks of students: " );
        scanf("%d",&marks);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks stored and the address of marks stored are: %d %u \n",marks[i],marks[i]);
    }
    return 0;
}