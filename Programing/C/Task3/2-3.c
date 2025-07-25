#include <stdio.h>
int main(){

    int n , i , num , min ;
    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    min = num;
     for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
    }

    printf("The minimum number is: %d\n", min);

    return 0;

}
