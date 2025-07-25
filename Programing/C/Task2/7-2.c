 #include <stdio.h>
#include <math.h>

int main(void) {

     double monthly_salary, annual_salary, tax = 0.0, net_annual_salary, net_monthly_salary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &monthly_salary);


    annual_salary = monthly_salary * 12;

    double taxable_amount;

    if (annual_salary <= 7000) {
        tax = 0;
    }
    else {
        taxable_amount = annual_salary - 7000;

        if (annual_salary <= 20000) {
            tax = taxable_amount * 0.10;
        }
        else if (annual_salary <= 45000) {
            tax = (20000 - 7000) * 0.10;
            tax += (annual_salary - 20000) * 0.15;
        }
        else if (annual_salary <= 200000) {
            tax = (20000 - 7000) * 0.10;
            tax += (45000 - 20000) * 0.15;
            tax += (annual_salary - 45000) * 0.20;
        }
        else {
            tax = (20000 - 7000) * 0.10;
            tax += (45000 - 20000) * 0.15;
            tax += (200000 - 45000) * 0.20;
            tax += (annual_salary - 200000) * 0.40;
        }
    }

    net_annual_salary = annual_salary - tax;
    net_monthly_salary = net_annual_salary / 12;

    printf("Annual salary before tax: %.2lf\n", annual_salary);
    printf("Total tax deducted: %.2lf\n", tax);
    printf("Net annual salary after tax: %.2lf\n", net_annual_salary);
    printf("Net monthly salary after tax: %.2lf\n", net_monthly_salary);
    */





    return 0 ;
}
