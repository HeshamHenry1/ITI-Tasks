#include<stdio.h>
int main(){
    int i;
    int arr_1[5], arr_2[5], mergArray[10];

    printf("Enter First Array 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }


    printf("Enter Second Array 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr_2[i]);
    }


     printf("Array 1: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");


    printf("Array 2: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr_2[i]);
    }
    printf("\n");



    for(i = 0; i < 5; i++) {
        mergArray[i] = arr_1[i];
        mergArray[i + 5] = arr_2[i];
    }
    printf("Merged array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", mergArray[i]);
    }
    printf("\n");

    return 0;
}
