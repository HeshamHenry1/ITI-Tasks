#include <stdio.h>
#include <math.h>

int main(void) {




 int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is: %s\n", (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");


    return 0 ;
}
