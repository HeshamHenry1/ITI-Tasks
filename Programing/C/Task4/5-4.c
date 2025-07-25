#include <stdio.h>
long long sumIterative(int n);
long long sumRecursive(int n);

int main(){

    int number;

    printf("Enter a positive integer 'n' to find the sum up to it: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("The sum is 0 for non-positive numbers.\n");
        return 0;
    }

    printf("\nCalculating sum of natural numbers up to %d...\n", number);

     long long result_iterative = sumIterative(number);
    printf("Result from Iterative method: %lld\n", result_iterative);


    long long result_recursive = sumRecursive(number);
    printf("Result from Recursive method: %lld\n", result_recursive);


    if (result_iterative == result_recursive) {
        printf("\nSuccess! Both methods produced the same result.\n");
    } else {
        printf("\nError! The methods produced different results.\n");
    }

    return 0;

}


long long sumIterative(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

long long sumRecursive(int n) {

    if (n == 1) {
        return 1;
    }

    return n + sumRecursive(n - 1);
}





