#include <stdio.h>
int main(){
    int n , i ;
    float max , min , num ;
    printf("How many float numbers will you enter? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of inputs.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%f", &num);

    max = min = num;

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) max = num;
        if (num < min) min = num;
    }

     printf("Maximum number: %.2f\n", max);
    printf("Minimum number: %.2f\n", min);

    return 0;





}
