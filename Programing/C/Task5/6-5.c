#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int value);


int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val;

    printf("Enter value to search: ");
    scanf("%d", &val);

    int pos = binarySearchRecursive(arr, 0, n - 1, val);

    if (pos != -1)
        printf("Value %d found at position %d\n", val, pos);
    else
        printf("Value %d not found in the array\n", val);

    return 0;
}

int binarySearchRecursive(int arr[], int left, int right, int value) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == value)
        return mid;
    else if (arr[mid] > value)
        return binarySearchRecursive(arr, left, mid - 1, value);
    else
        return binarySearchRecursive(arr, mid + 1, right, value);
}

