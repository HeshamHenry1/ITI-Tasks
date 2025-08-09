#include<stdio.h>
int main(){
    int n = 10 ;
    int num[n];
    int i ;
    int odd_nums[n];
    int even_nums[n];
    int odd_count = 0, even_count = 0;
printf("Enter 10 numbers:\n");
for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
        if(num[i]%2==0){
           even_nums[even_count] = num[i];
            even_count++;
        }
        else
        {

             odd_nums[odd_count] = num[i];
            odd_count++;
        }


}

 printf("\nEven numbers:\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_nums[i]);
    }

    printf("\nOdd numbers:\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_nums[i]);
    }

    return 0;


}

