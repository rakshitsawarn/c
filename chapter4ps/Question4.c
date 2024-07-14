// Question - 4 - What can be done using one type of loops can also be done using other two type of loops
// option (a) - True = Correct Answer
// option (b) - False

/*
#include <stdio.h>
int main(){
    int number,count;
    count = 20;
    number = 10;
    for (number; number <= count; number++)
    {
        printf("The Number from 10 to 20 are: %d\n",number);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int number,count;
    number = 10;
    count = 20;
    while (number<=count)
    {
        printf("The Number from 10 to 20 are: %d\n",number);
        number++;
    }   
}
*/

/*
#include<stdio.h>
int main(){
    int number,count;
    number = 10;
    count = 20;
    do
    {
        printf("The Number from 10 to 20 are: %d\n",number);
        number++;
    } while (number<=count);
    return 0;
}
*/
