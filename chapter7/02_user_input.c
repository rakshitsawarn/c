#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Marks of students: ");
        scanf("%d",&marks);
    }
    
   for (int i = 0; i < 5; i++)
   {
    printf("The Marks of Student 1 in all subjects are: %d",marks[i]);
   }
   
    return 0;
}