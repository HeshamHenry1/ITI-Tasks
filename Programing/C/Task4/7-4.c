
#include <stdio.h>
#include <math.h>
double sin_taylor(double x_radians, int num_terms);

int main(){

    double degrees;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &degrees);

     double radians = degrees * (M_PI / 180.0);

      int terms_to_use = 10;
    double my_sin_result = sin_taylor(radians, terms_to_use);
    printf("\nResult from our Taylor series function (10 terms): %.10f\n", my_sin_result);


     double library_sin_result = sin(radians);
    printf("Result from the built-in sin() function:         %.10f\n", library_sin_result);

    return 0;

}


double sin_taylor(double x_radians, int num_terms) {

    double term = x_radians;
    double sum = term;


    for (int i = 1; i < num_terms; i++) {


        term = term * (-1.0) * x_radians * x_radians / ((2 * i) * (2 * i + 1));


        sum = sum + term;
    }

    return sum;
}


