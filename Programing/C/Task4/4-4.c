
#include <stdio.h>

long long powerIterative(int base, int exponent);
long long powerRecursive(int base, int exponent);

int main(){

     int base, exponent;

      printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent (non-negative): ");
    scanf("%d", &exponent);

     if (exponent < 0) {
        printf("Error: Negative exponents are not supported.\n");
        return 1;
    }

     printf("\nCalculating %d^%d using both methods...\n", base, exponent);


    long long result_iterative = powerIterative(base, exponent);
    printf("Result from Iterative method: %lld\n", result_iterative);


    long long result_recursive = powerRecursive(base, exponent);
    printf("Result from Recursive method: %lld\n", result_recursive);


    if (result_iterative == result_recursive) {
        printf("\nSuccess! Both methods produced the same result.\n");
    } else {
        printf("\nError! The methods produced different results.\n");
    }

    return 0;


}



long long powerIterative(int base, int exponent) {
    long long result = 1;
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result;
}

long long powerRecursive(int base, int exponent) {

    if (exponent == 0) {
        return 1;
    }

    return base * powerRecursive(base, exponent - 1);
}


