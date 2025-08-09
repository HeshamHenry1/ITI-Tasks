#include <stdio.h>

#define MAX_CUSTOMERS 100

struct customer {
    char name[50];
    int account_number;
    double balance;
};

void printCustomersWithLowBalance(struct customer arr[], int n);
void addBonusToRichCustomers(struct customer arr[], int n);

int main() {
    struct customer customers[MAX_CUSTOMERS];
    int n;

    printf("Enter number of customers (max %d): ", MAX_CUSTOMERS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);

        printf("Account Number: ");
        scanf("%d", &customers[i].account_number);

        printf("Balance: ");
        scanf("%lf", &customers[i].balance);
    }

    printf("\nCustomers with balance less than $200:\n");
    printCustomersWithLowBalance(customers, n);

    printf("\nAdding $100 to customers with balance more than $1000...\n");
    addBonusToRichCustomers(customers, n);

    return 0;
}

void printCustomersWithLowBalance(struct customer arr[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].balance < 200.0) {
            printf("Name: %s\n", arr[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers found with balance less than $200.\n");
    }
}

void addBonusToRichCustomers(struct customer arr[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].balance > 1000.0) {
            arr[i].balance += 100.0;
            printf("Customer: %s, New Balance: %.2lf\n", arr[i].name, arr[i].balance);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers found with balance more than $1000.\n");
    }
}

