#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1,e2;
    strcpy(e1.name,"Rakshit");
    e1.code = 45;
    e1.salary = 54.44;
    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}