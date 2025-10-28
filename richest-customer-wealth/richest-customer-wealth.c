#include <stdio.h>
int main() {
    int accountsSize, accountsColSize;
    
    printf("Enter number of customers (rows): ");
    scanf("%d", &accountsSize);
    
    printf("Enter number of bank accounts (columns): ");
    scanf("%d", &accountsColSize);
    
    int accounts[accountsSize][accountsColSize];

    printf("\nEnter wealth data for each customer:\n");
    for (int i = 0; i < accountsSize; i++) {
        for (int j = 0; j < accountsColSize; j++) {
            printf("Customer %d, Account %d: ", i + 1, j + 1);
            scanf("%d", &accounts[i][j]);
        }
    }
    printf("\nAccounts Data:\n[");
    for (int i = 0; i < accountsSize; i++) {
        printf("[");
        for (int j = 0; j < accountsColSize; j++) {
            printf("%d", accounts[i][j]);
            if (j < accountsColSize - 1) printf(", ");
        }
        printf("]");
        if (i < accountsSize - 1) printf(", ");
    }
    printf("]\n");

    int maxWealth = 0;
    for (int i = 0; i < accountsSize; i++) {
        int sum = 0;
        for (int j = 0; j < accountsColSize; j++) {
            sum += accounts[i][j];
        }
        printf("Total wealth of Customer %d = %d\n", i + 1, sum);
        if (sum > maxWealth) {
            maxWealth = sum;
        }
    }

    printf("\nRichest Customer's Wealth = %d\n", maxWealth);

    return 0;
}
