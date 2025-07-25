#include <stdio.h>

int main(void) {
    /*  1-

    double side;
    double area;

    printf("To compute Area of square please enter side: ");
    scanf("%lf", &side);

    area = side * side;

    printf("The area is: %.2lf\n", area);
    */

    /* 2 -
    double length , width , Area ;
    printf("To compute Area of rectangle please enter Length: ");
    scanf("%lf",&length);
    printf("To compute Area of rectangle please enter width: ");
    scanf("%lf",&width);
    Area = length * width;
    printf("The area is: %.2lf\n", Area);
    */


    /* 3 -
    const double PI = 3.14159;
    double R , Area ;
     printf("To compute Area of a Circle please enter Radius : ");
     scanf("%lf",&R);
     Area = (R*R)*PI;
     printf("The area is: %.2lf\n", Area);
     */
     /* 4 -

     double Hight , Base , Area ;
     printf("To compute Area of  triangle please enter Hight: ");
     scanf("%lf",&Hight);
      printf("To compute Area of  triangle please enter Base: ");
       scanf("%lf",&Base);
       Area = (Hight*Base)*(0.5);
        printf("The area is: %.2lf\n", Area);



      */



      /* 5 -

      int num1 , num2 , sum ;
      printf("Enter First Number : ");
     scanf("%d",&num1);
     printf("Enter Second Number : ");
     scanf("%d",&num2);
     sum = num1 + num2 ;
     printf("The sum  is: %d\n",sum);

*/


/* 6-

 int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is: %s\n", (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");
    */



    /*  7-
    int num;
     printf("Enter a number: ");
     scanf("%d", &num);
     printf("The number is: %s\n", (num % 2 == 0) ? "Even" : "Odd");
     */
/*
      int amount;
    printf("Enter the amount to pay: ");
    scanf("%d", &amount);

    int coins50 = amount / 50;
    int remainder50 = amount % 50;

    int coins25 = remainder50 / 25;
    int remainder25 = remainder50 % 25;

    int coins10 = remainder25 / 10;
    int remainder10 = remainder25 % 10;

    int coins5 = remainder10 / 5;
    int remainder5 = remainder10 % 5;

    int coins1 = remainder5;

    printf("Coins to pay the amount using fewest coins:\n");
    printf("%d coin(s) of 50\n", coins50);
    printf("%d coin(s) of 25\n", coins25);
    printf("%d coin(s) of 10\n", coins10);
    printf("%d coin(s) of 5\n", coins5);
    printf("%d coin(s) of 1\n", coins1);
    */




    return 0;
}

