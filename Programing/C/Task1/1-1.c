#include <stdio.h>

int main(void) {


    double side;
    double area;

    printf("To compute Area of square please enter side: ");
    scanf("%lf", &side);

    area = side * side;

    printf("The area is: %.2lf\n", area);

        return 0;
}
