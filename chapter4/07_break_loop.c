#include<stdio.h>
int main(){
    int count = 10;
    for (int i = 5; i <= count; i++)
    {
        if (i==9)
        {
            break; // Exit the loop now   
        }
        printf("The vallue of i is: %d \n",i);
    }
    
    return 0;
}