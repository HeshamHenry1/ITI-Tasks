#include <stdio.h>
void insertSortedSimple(int arr[], int *n, int num);


int main() {
    int nums[5] = {1, 2, 3};
    int n = 3;
    int num;

    printf("Enter number to insert: ");
    scanf("%d", &num);

    insertSortedSimple(nums, &n, num);

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

void insertSortedSimple(int arr[], int *n, int num) {
    int i = *n - 1;

    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = num;

    (*n)++;
}
