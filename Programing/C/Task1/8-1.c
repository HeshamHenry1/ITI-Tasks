  #include <stdio.h>

int main(void) {
      int amount;
    printf("Enter the amount to pay: ");
    scanf("%d", &amount);

    int coins50 = amount / 50;
    int remainder50 = amount % 50;

    int coins25 = remainder50 / 25;
    int remainder25 = remainder50 % 25;

    int coins10 = remainder25 / 10;
    int remainder10 = remainder25 % 10;

    int coins5 = remainder10 / 5;
    int remainder5 = remainder10 % 5;

    int coins1 = remainder5;

    printf("Coins to pay the amount using fewest coins:\n");
    printf("%d coin(s) of 50\n", coins50);
    printf("%d coin(s) of 25\n", coins25);
    printf("%d coin(s) of 10\n", coins10);
    printf("%d coin(s) of 5\n", coins5);
    printf("%d coin(s) of 1\n", coins1);
    */




    return 0;
}
