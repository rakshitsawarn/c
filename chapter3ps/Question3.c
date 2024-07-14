// Question - 3 - Calculate Income Tax paid by an employee to the government

#include <stdio.h>
int main()
{
    float lowest_income_tax, income_tax_amount_paid1, income_tax_amount_paid2, income_tax_amount_paid3, income_tax_amount_paid4, employee_income, percent1, percent2, percent3, percent4;
    printf("Enter your income to know the amount you have to pay to government: ");
    scanf("%f",&employee_income);
    lowest_income_tax = 2.50;
    percent1 = 0.00;
    percent2 = 5.00;
    percent3 = 20.00;
    percent4 = 30.00;
    income_tax_amount_paid1 = employee_income * percent1 / 100.00;
    income_tax_amount_paid2 = employee_income * percent2 / 100.00;
    income_tax_amount_paid3 = employee_income * percent3 / 100.00;
    income_tax_amount_paid4 = employee_income * percent4 / 100.00;
    if (employee_income < lowest_income_tax)
    {
        printf("Hoorrahhh!! You saved your hard earned money from the robbers \n");
        printf("You have to give %f Lakhs to government", income_tax_amount_paid1);
    }
    else if (employee_income >= lowest_income_tax && employee_income <= 5.00)
    {
        printf("Pay the tax of 5 percent to the government \n");
        printf("You have to give %f Lakhs to government", income_tax_amount_paid2);
    }
    else if (5.00 <= employee_income && employee_income <= 10.00)
    {
        printf("Pay the 20 percent to the Government \n");
        printf("You have to give %f Lakhs to government", income_tax_amount_paid3);
    }
    else if (employee_income > 10.0)
    {
        printf("Pay 30 percent of your income to Government \n");
        printf("You have to give %f Lakhs to government", income_tax_amount_paid4);
    }
    else
    {
        printf("Input a valid income");
    }
    return 0;
}