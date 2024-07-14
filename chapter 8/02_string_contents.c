#include<stdio.h>
int main(){
    char st[] = {'A','B','c','D','\0'};
    for (int i = 0; i < 4; i++)
    {
        printf("Characters are: %c \n",st[i]);
    }
    return 0;
}