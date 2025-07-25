#include <stdio.h>
int main() {
    int decimal_number;
    int base;
    long long converted_number = 0;
    int remainder;
    int power_of_10 = 1;

 printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    printf("Enter the base to convert to (2-10): ");
    scanf("%d", &base);

    int original_number = decimal_number;

     while (decimal_number > 0) {
        remainder = decimal_number % base;


        converted_number = converted_number + (long long)remainder * power_of_10;

        decimal_number = decimal_number / base;

        power_of_10 = power_of_10 * 10;
    }


    printf("\nThe decimal number %d is equal to %lld in base %d.\n", original_number, converted_number, base);

    return 0;
}

