#include <stdio.h>
int main()
{
    int i = 2;
    int *i1 = &i;
    int **i2 = &i1;
    float j = 2.56;
    float *j1 = &j;
    float **j2 = &j1;
    char k = "L";
    char *k1 = &k;
    char **k2 = &k1;
    printf("The value of i is: %d\n", i);
    printf("The value of i is: %d\n", i1);
    printf("The value of i is: %d\n", i2);
    return 0;
}