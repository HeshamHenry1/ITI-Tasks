#include<stdio.h>
int main(){
    int num[5];
    int revers_num[5];
    int i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Original array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");


    for(i = 0; i < 5; i++) {
        revers_num[i] = num[4 - i];
    }
   printf("Reversed array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", revers_num[i]);
    }
    printf("\n");

    return 0;


}
