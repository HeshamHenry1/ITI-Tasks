#include<stdio.h>
int main(){
    int n = 10 ;
    int num[n];
    int i ;
    int max = 0 ;

printf("Enter 10 numbers:\n");
for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>max){
            max= num[i];
        }
}
printf("\nthe max is : %d ",max);




    return 0;
}
