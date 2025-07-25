#include <stdio.h>

int main() {
    int n;


    printf("Enter the size of the odd magic square (e.g., 3, 5, 7): ");
    scanf("%d", &n);


    if (n <= 0 || n % 2 == 0) {
        printf("Error: Please enter a positive odd number.\n");
        return 1;
    }


    int magicSquare[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }


    int row = 0;
    int col = n / 2;

    for (int num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num;

        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;

        if (magicSquare[next_row][next_col] != 0) {
            row = (row + 1) % n;
        } else {
            row = next_row;
            col = next_col;
        }
    }


    printf("\nThe Magic Square of size %dx%d is:\n", n, n);
    printf("Magic Constant: %d\n\n", n * (n * n + 1) / 2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;
}

