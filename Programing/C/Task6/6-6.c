#include<stdio.h>
void concatenate(char *str1, char *str2);
int main(){
     int size = 30;
    char str1[size];
    char str2[size];
     char ch;

     printf("Enter First  string: ");
    scanf("%[^\n]", str1);
      getchar();

    printf("Enter Second  string: ");
    scanf("%[^\n]", str2);
    concatenate(str1, str2);

    return 0;





return 0 ;
}

void concatenate(char *str1, char *str2) {
    char *start = str1;

    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';

    printf("Concatenated string: %s\n", start);
}
