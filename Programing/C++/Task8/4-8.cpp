#include <iostream>
using namespace std;
void generateMagicSquare(int n);
int main() {
    int n;
    cout << "Enter an odd number for size of magic square  : ";
    cin >> n;

    if (n > 15) {
        cout << "Maximum size allowed is 15." << endl;
        return 1;
    }

    generateMagicSquare(n);

    return 0;
}

void generateMagicSquare(int n) {
    if (n % 2 == 0) {
        cout << "This method works only for odd n." << endl;
        return;
    }

    int magicSquare[15][15] = {0};

    int num = 1;
    int i = 0, j = n / 2;

    while (num <= n * n) {
        magicSquare[i][j] = num;

        int new_i = (i - 1 + n) % n;
        int new_j = (j + 1) % n;

        if (magicSquare[new_i][new_j] != 0) {
            i = (i + 1) % n;
        } else {
            i = new_i;
            j = new_j;
        }
        num++;
    }


    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            cout << magicSquare[x][y] << "\t";
        }
        cout << endl;
    }
}
