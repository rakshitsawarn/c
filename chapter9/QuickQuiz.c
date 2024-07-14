#include<stdio.h>
#include<string.h>
struct employee1 {
    char name[40];
    int code;
    char language[50];
    float salary;
};

struct employee2 {
    char name[40];
    int code;
    char language[50];
    float salary;
};

struct employee3 {
    char name[40];
    int code;
    char language[50];
    float salary;
};

int main() {
    struct employee1 e1;
    struct employee2 e2;
    struct employee3 e3;

    printf("Enter details for Employee 1:\n");
    printf("Name: ");
    scanf("%39s", e1.name);  
    printf("Language: ");
    scanf("%49s", e1.language);  
    printf("Salary: ");
    scanf("%f", &e1.salary);
    printf("Code: ");
    scanf("%d", &e1.code);

    printf("Name: %s\nLanguage: %s\nCode: %d\nSalary: %.2f\n", e1.name, e1.language, e1.code, e1.salary);

    printf("\nEnter details for Employee 2:\n");
    printf("Name: ");
    scanf("%39s", e2.name);
    printf("Language: ");
    scanf("%49s", e2.language);
    printf("Salary: ");
    scanf("%f", &e2.salary);
    printf("Code: ");
    scanf("%d", &e2.code);

    printf("Name: %s\nLanguage: %s\nCode: %d\nSalary: %.2f\n", e2.name, e2.language, e2.code, e2.salary);

    printf("\nEnter details for Employee 3:\n");
    printf("Name: ");
    scanf("%39s", e3.name);
    printf("Language: ");
    scanf("%49s", e3.language);
    printf("Salary: ");
    scanf("%f", &e3.salary);
    printf("Code: ");
    scanf("%d", &e3.code);

    printf("Name: %s\nLanguage: %s\nCode: %d\nSalary: %.2f\n", e3.name, e3.language, e3.code, e3.salary);

    return 0;
}
