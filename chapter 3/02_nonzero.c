#include<stdio.h>
int main(){
    if(1){
        printf("This if is executed because it is not 0 \n");
    } if(2345){
        printf("This if is executed because it is not 0 \n");
    }
    if(234){
        printf("This if is executed because it is not 0 \n");
    }
    if('c'){
        printf("This if is executed because it is not 0 \n");
    }
    if(2.11){
        printf("This if is executed because it is not 0 \n");
    }
    if(0.2){
        printf("This if is executed because it is not 0 \n");
    }
    if(0){
        printf("This if is not executed because it is 0 \n");
    }
    if(-2345){
        printf("This if is executed because it is not 0 \n");
    }
    return 0;
}