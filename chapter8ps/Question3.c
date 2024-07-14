// Question - 3 - Write your own version of function strlen

#include <stdio.h>
int strlen(char str[]){
    int i = 0;
    char c = st[i];
    while (st[i]!='\0')
    {
        c = st[i];
        i++;
    }
    return i;
}
int main(){
    char st[] = {"Rakshit Sawarn"};
    printf("The length of string is: %d",strlen(st));
    return 0;
}