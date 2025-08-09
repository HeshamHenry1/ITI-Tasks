#include<stdio.h>
void getArray(int num[], int n );
void printArray(int num[], int n );
int main (){


     int n = 10;
    int num[10];

    getArray(num, n);

    printArray(num, n);

    return 0;

}
void getArray(int num[], int n ){
  int i;
    printf("Enter %d numbers you want to sort:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);

}
}

void printArray(int num[], int n ){

     int i;
    printf("\nArray that you enter it :\n");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}

