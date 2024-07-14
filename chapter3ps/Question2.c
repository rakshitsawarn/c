// Question - 2 - Find marks and see student is passed or not
#include <stdio.h>
int main()
{
    float marks1, marks2, marks3, students_total_marks, marks_per_subject, total_marks, percentage_subject_wise1, percentage_subject_wise2, percentage_subject_wise3, total_percentage;
    printf("Enter Marks of subject 1: ");
    scanf("%f", &marks1);
    printf("Enter Marks of subject 2: ");
    scanf("%f", &marks2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &marks3);
    marks_per_subject = 100.00;
    students_total_marks = marks1 + marks2 + marks3;
    total_marks = 300.00;
    percentage_subject_wise1 = (marks1 / marks_per_subject) * 100;
    percentage_subject_wise2 = (marks2 / marks_per_subject) * 100;
    percentage_subject_wise3 = (marks3 / marks_per_subject) * 100;
    total_percentage = (students_total_marks / total_marks) * 100;
    printf("Percentage in subject 1: %.2f%%\n", percentage_subject_wise1);
    printf("Percentage in subject 2: %.2f%%\n", percentage_subject_wise2);
    printf("Percentage in subject 3: %.2f%%\n", percentage_subject_wise3);
    printf("Total Percentage: %.2f%%\n", total_percentage);

    if (total_percentage > 40)
    {
        printf("You Passed in Every Subject");
    }
    else if (percentage_subject_wise1 > 33)
    {
        printf("You Passed in subject 1");
    }
    else if (percentage_subject_wise2 > 33)
    {
        printf("You Passed in Subject 2");
    }
    else if (percentage_subject_wise3 > 33)
    {
        printf("You passed in subject 3");
    }
    else
    {
        printf("You Failed");
    }
    return 0;
}