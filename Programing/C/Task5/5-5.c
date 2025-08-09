#include<stdio.h>
int linearSearch(int arr[], int n, int value);
int main(){

     int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val;

    printf("Enter value to search: ");
    scanf("%d", &val);

    int pos = linearSearch(arr, n, val);

    if (pos != -1)
        printf("Value %d found at position %d\n", val, pos);
    else
        printf("Value %d not found in the array\n", val);



return 0 ;
}

int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

