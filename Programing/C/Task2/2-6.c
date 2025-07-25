#include <stdio.h>
#include <math.h>

int main(void) {


/* 1-

 int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is: %s\n", (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");

    */

    /* 2 -
    int mark;
    printf("Enter the student mark: ");
    scanf("%d", &mark);
     if (mark < 50) {
        printf("Fail\n");
    }
    else if (mark >= 50 && mark < 65) {
        printf("Pass\n");
    }
    else if (mark >= 65 && mark < 80) {
        printf("Good\n");
    }
    else if (mark >= 80 && mark <= 90) {
        printf("Very Good\n");
    }
    else if (mark > 90) {
        printf("Excellent\n");
    }
    else {
        printf("Invalid mark\n");
    }
    */

    /* 3-
    int num;
    printf("Enter a number between 0 and 99: ");
    scanf("%d", &num);

    if (num < 0 || num > 99) {
        printf("Number out of range.\n");
        return 1;
    }

    if (num < 20) {
        switch (num) {
            case 0: printf("zero\n"); break;
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
            case 10: printf("ten\n"); break;
            case 11: printf("eleven\n"); break;
            case 12: printf("twelve\n"); break;
            case 13: printf("thirteen\n"); break;
            case 14: printf("fourteen\n"); break;
            case 15: printf("fifteen\n"); break;
            case 16: printf("sixteen\n"); break;
            case 17: printf("seventeen\n"); break;
            case 18: printf("eighteen\n"); break;
            case 19: printf("nineteen\n"); break;
        }
    } else {
        int tens = num / 10;
        int ones = num % 10;


        switch (tens) {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }


        if (ones != 0) {
            printf("-");
            switch (ones) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
            }
        }

        printf("\n");
    }
    */
    /* 6 -

     double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 1;
    }
     discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and same:\n");
        printf("Root = %.2lf\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }
    */

    /*  7 -

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
