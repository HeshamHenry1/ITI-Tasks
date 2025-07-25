#include <stdio.h>

int main() {

      int n, i, num;
      int max, min, sum = 0;
      float average;
       printf("How many integers will you enter? ");
    scanf("%d", &n);
      if (n <= 0) {
        printf("Invalid number of inputs.\n");
        return 1;
    }
     printf("Enter number 1: ");
    scanf("%d", &num);

    max = min = num;
    sum = num;
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;

        if (num > max) max = num;
        if (num < min) min = num;
    }

     average = (float)sum / n;

    printf("\nResults:\n");
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    printf("Average: %.2f\n", average);


        return 0;
}
