#include<stdio.h>
void bubbleSort(int arr[], int size);
int main(){

   int n = 10 ;
    int num[n];
    int i ;

printf("Enter 10 numbers you want to  sort it :\n");
for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);

}
bubbleSort(num, n);


     printf("\nSorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

return 0 ;

}

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for(i = 0; i < size-1; i++) {
        for(j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
