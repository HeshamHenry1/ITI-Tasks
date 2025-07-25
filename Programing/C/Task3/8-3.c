#include <stdio.h>

int main() {
    long number;
    int character;
    int digit_count;
    int is_invalid;


    while (1) {

        number = 0;
        digit_count = 0;
        is_invalid = 0;

        printf("Enter an integer (up to 5 digits): ");


        while ((character = getchar()) != '\n' && character != EOF) {


            if (character >= '0' && character <= '9') {

                if (is_invalid) {
                    continue;
                }

                digit_count++;


                number = number * 10 + (character - '0');

            } else {

                is_invalid = 1;
            }
        }




        if (is_invalid) {
            printf("Error: Input must contain only digits.\n\n");
            continue;
        }


        if (digit_count == 0) {
            printf("Error: Input cannot be empty.\n\n");
            continue;
        }


        if (digit_count > 5) {
            printf("Error: Input is too long. Please enter up to 5 digits.\n\n");
            continue;
        }


        break;
    }


    printf("\nSuccess! You entered the valid number: %ld\n", number);

    return 0;
}

