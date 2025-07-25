#include <stdio.h>

void swap(int* ptr_a, int* ptr_b);

int main(){

     int num1, num2;


    printf("Enter the first number (num1): ");
    scanf("%d", &num1);

    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

     printf("\nBefore swap: num1 = %d, num2 = %d\n", num1, num2);

     swap(&num1, &num2);

     printf("After swap:  num1 = %d, num2 = %d\n", num1, num2);

    return 0;


}

void swap(int* ptr_a, int* ptr_b) {
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}


