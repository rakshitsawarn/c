#include<stdio.h>
int main(){
    int i,count;
    count = 10;
    for (i = 5; i <=count; i++)
    {
        if (i == 7)
        {
            continue; //Skip the Iteration
        }
        
        printf("The value of i is: %d \n",i);
    }
    return 0;
}