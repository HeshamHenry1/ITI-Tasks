#include <iostream>
using namespace std;

void generateDoublyEvenMagicSquare(int n) {
    if (n % 4 != 0) {
        cout << "This method only works for doubly even numbers (4, 8, 12, ...)" << endl;
        return;
    }

    int magicSquare[20][20];
    int i, j;


    int num = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magicSquare[i][j] = num++;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {


            if ( (i % 4 == j % 4) || ((i % 4 + j % 4) == 3) ) {
                magicSquare[i][j] = n * n + 1 - magicSquare[i][j];
            }
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << magicSquare[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter  even number like 4  : ";
    cin >> n;

    generateDoublyEvenMagicSquare(n);

    return 0;
}

