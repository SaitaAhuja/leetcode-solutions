#include <stdio.h>
int main() {
    int high, low, count;
    
    printf("Enter the low number: ");
    scanf("%d", &low);
    printf("Enter the high number: ");
    scanf("%d", &high);

    count = ((high - low) / 2) + (low % 2 || high % 2);

    printf("The odds between %d and %d are: %d\n", low, high, count);
    getch();
    return 0;
}
