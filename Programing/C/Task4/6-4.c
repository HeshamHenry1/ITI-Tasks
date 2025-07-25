#include <stdio.h>

unsigned long long factorialIterative(int n);
unsigned long long factorialRecursive(int n);

int main(){


    int number;

    printf("Enter an integer 'n' to find its factorial (0-20): ");
    scanf("%d", &number);


    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    if (number > 20) {
        printf("Error: Result will overflow. Please enter a number <= 20.\n");
        return 1;
    }

    printf("\nCalculating %d! using both methods...\n", number);


    unsigned long long result_iterative = factorialIterative(number);
    printf("Result from Iterative method: %llu\n", result_iterative);


    unsigned long long result_recursive = factorialRecursive(number);
    printf("Result from Recursive method: %llu\n", result_recursive);


    if (result_iterative == result_recursive) {
        printf("\nSuccess! Both methods produced the same result.\n");
    } else {
        printf("\nError! The methods produced different results.\n");
    }

    return 0;

}

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;

    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

unsigned long long factorialRecursive(int n) {

    if (n == 0) {
        return 1;
    }

    return (unsigned long long)n * factorialRecursive(n - 1);
}


