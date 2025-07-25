#include <stdio.h>

int isPrime(int n);
int main(){

    int number;


    while (1) {

        printf("\nEnter a number to check (or enter 0 to exit): ");
        scanf("%d", &number);


        if (number <= 0) {
            printf("Exiting program. Goodbye!\n");
            break;
        }
         int result = isPrime(number);

          if (result == 1) {
            printf("-> Result: %d is a prime number.\n", number);
        } else {
            printf("-> Result: %d is not a prime number.\n", number);
        }
          }

    return 0;



}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
