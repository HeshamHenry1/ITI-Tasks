#include<stdio.h>
int main(){
   int size = 30;
    char str[size];
    char *ptr;
    int length = 0;



   printf("Enter the string: ");
    scanf("%[^\n]", str);
    ptr = str;
     while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);



return 0;
}
