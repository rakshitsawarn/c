#include<stdio.h>
int main(){
    int marks[] = {1,2,34,55};
    int * marks1 = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        //printf("The values are: %d \n",marks[i]);
        printf("The values are according to pointers are: %d \n",*marks1);
        marks1++;
    }
    return 0;
}