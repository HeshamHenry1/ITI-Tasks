#include<stdio.h>
void print_reverse(const char *str);
int main(){
    char str[30];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Reversed string: ");
    print_reverse(str);
    printf("\n");

    return 0;
}

void print_reverse(const char *str) {

    int length = 0;
    const char *ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
}
