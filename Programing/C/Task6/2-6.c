#include<stdio.h>
int main(){
    int size = 10;
    int arr[size];
    int i ;
    for(i=0; i<size;i++){
        printf("Enter number%d: ",i+1);
        scanf("%d",&arr[i]);
    }

     int *ptr = arr;
      printf("Array elements using pointer:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");


    return 0 ;




}
