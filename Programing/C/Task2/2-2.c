 #include <stdio.h>
#include <math.h>

int main(void) {
    int mark;
    printf("Enter the student mark: ");
    scanf("%d", &mark);
     if (mark < 50) {
        printf("Fail\n");
    }
    else if (mark >= 50 && mark < 65) {
        printf("Pass\n");
    }
    else if (mark >= 65 && mark < 80) {
        printf("Good\n");
    }
    else if (mark >= 80 && mark <= 90) {
        printf("Very Good\n");
    }
    else if (mark > 90) {
        printf("Excellent\n");
    }
    else {
        printf("Invalid mark\n");
    }
    return 0 ;
}
