#include <stdio.h>
int main(){

    int n , i , num , max ;
    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
     for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The largest number is: %d\n", max);

    return 0;

}
