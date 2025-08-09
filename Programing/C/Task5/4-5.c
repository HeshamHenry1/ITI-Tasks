#include<stdio.h>
/* iterative */
int main(){
    int n = 10 ;
    int num[n];
    int i ;
    int sum = 0 ;

printf("Enter 10 numbers:\n");
for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];

}
printf("\nthe sum is : %d ",sum);




    return 0;
}

/* Recursion

#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n = 10;
    int num[n];
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int sum = sumArray(num, n);

    printf("\nThe sum is: %d\n", sum);

    return 0;
}
*/

