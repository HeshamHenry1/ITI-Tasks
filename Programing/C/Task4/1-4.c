#include <stdio.h>
void decimalToBinaryIterative(int n);
void decimalToBinaryRecursive(int n);


int main() {
    int number;


    printf("Enter a decimal number to convert using both methods: ");
    scanf("%d", &number);


    printf("\nResult from Iterative method: ");
    decimalToBinaryIterative(number);
    printf("\n");


    printf("Result from Recursive method: ");

    if (number == 0) {
        printf("0");
    } else {
        decimalToBinaryRecursive(number);
    }
    printf("\n");

      printf("\nBoth methods should produce the same result.\n");

    return 0;

}

void decimalToBinaryIterative(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    long long binaryNumber = 0;
    int powerOf10 = 1;

    while (n > 0) {
        int remainder = n % 2;
        binaryNumber = binaryNumber + (long long)remainder * powerOf10;
        n = n / 2;
        powerOf10 = powerOf10 * 10;
    }

    printf("%lld", binaryNumber);
}

void decimalToBinaryRecursive(int n) {


    if (n == 0) {
        return;
    }


    decimalToBinaryRecursive(n / 2);


    printf("%d", n % 2);
}

