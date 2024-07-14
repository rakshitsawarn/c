#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks to know your Grades: \n");
    scanf("%d",&marks);

    if (marks < 0) {
        printf("GO TO HELL\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade is F\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Grade is E\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade is D\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade is C\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade is B. Good you are above average\n");
    } else if (marks >= 90 && marks <= 100) {
        printf("Grade is A. Congratulations You are topper\n");
    } else {
        printf("Invalid marks entered.\n"); 
    }

    return 0;
}
