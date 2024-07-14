// Question - 2 - Write a program having a variable i. Pass this variable to a function and print its adress. Are they same?
/*
#include <stdio.h>
// Function Prototype
int function_of_finding_address(int);
int main()
{
    int i = 44;
    int *i1 = &i;
    // Function Definition
    int function_of_finding_address(int i)
    {
        printf("The address of variable i is: %p", (void *)i1);
    }
    function_of_finding_address(i);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i = 44;
    int * i1 = &i;
    printf("The Address of i is: %p",(void*)i1);
    return 0;
}

// Yes they both are same
