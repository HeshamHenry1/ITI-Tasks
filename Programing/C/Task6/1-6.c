#include<stdio.h>
void sum(int *num1 ,int  *num2 );
int main(){
 int a, b;
   printf("Enter number 1: ");
    scanf("%d", &a);

    printf("Enter number 2: ");
    scanf("%d", &b);
    sum(&a, &b);

    return 0;
}

void sum(int *num1, int *num2) {
    printf("Sum is: %d\n", *num1 + *num2);
}
