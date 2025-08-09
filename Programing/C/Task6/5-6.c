#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int max = *arr;
    int *ptr = arr + 1;

    for (i = 1; i < n; i++, ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }

    printf("Maximum number is: %d\n", max);


    return 0;
}
