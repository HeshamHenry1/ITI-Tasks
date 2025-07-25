

#include <stdio.h>

int main(void) {
    double length , width , Area ;
    printf("To compute Area of rectangle please enter Length: ");
    scanf("%lf",&length);
    printf("To compute Area of rectangle please enter width: ");
    scanf("%lf",&width);
    Area = length * width;
    printf("The area is: %.2lf\n", Area);

           return 0;
}
