#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee harry = {100,71.22,"Sohan"};
    printf("%d\n%f\n%s",harry.code,harry.salary,harry.name);
    return 0;
}