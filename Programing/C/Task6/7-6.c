#include<stdio.h>
void compar_string(char *str1, char *str2);
int main(){
     int size = 30;
    char str1[size];
    char str2[size];

     printf("Enter First  string: ");
    scanf("%[^\n]", str1);
      getchar();

    printf("Enter Second  string: ");
    scanf("%[^\n]", str2);
    compar_string(str1, str2);


return 0 ;
}

void compar_string(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            printf("Strings are NOT equal\n");
            return;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        printf("Strings are equal\n");
    } else {
        printf("Strings are NOT equal\n");
    }
}
