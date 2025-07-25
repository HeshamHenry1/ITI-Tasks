  #include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double R , Area ;
     printf("To compute Area of a Circle please enter Radius : ");
     scanf("%lf",&R);
     Area = (R*R)*PI;
     printf("The area is: %.2lf\n", Area);
              return 0;
}
