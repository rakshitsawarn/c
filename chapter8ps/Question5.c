//Question - 5- Write your own version of strcpy

#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Rakshit";
    char target[30];
    printf("%s",strcpy(target,source));
    return 0;
}