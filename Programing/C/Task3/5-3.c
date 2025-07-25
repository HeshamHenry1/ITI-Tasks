#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int current_number;
    int i;


    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;


    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);


    if (n < 4) {
        printf("Error: Please enter at least 4 numbers to find the range without the two extremes.\n");
        return 1;
    }


    printf("Please enter %d integer numbers, separated by spaces or new lines:\n", n);


    for (i = 0; i < n; i++) {
        scanf("%d", &current_number);


        if (current_number > max1) {
            max2 = max1;
            max1 = current_number;
        } else if (current_number > max2) {
            max2 = current_number;
        }


        if (current_number < min1) {
            min2 = min1;
            min1 = current_number;
        } else if (current_number < min2) {
            min2 = current_number;
        }
    }


    int range = max2 - min2;
    printf("\nMaximum value (max1): %d\n", max1);
    printf("Second maximum value (max2): %d\n", max2);
    printf("Minimum value (min1): %d\n", min1);
    printf("Second minimum value (min2): %d\n", min2);
    printf("\nThe range without the two extreme values (max2 - min2) is: %d\n", range);

    return 0;
}
