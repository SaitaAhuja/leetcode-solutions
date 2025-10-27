#include <stdio.h>

int main() {
    int num[50];
    int target, n, i, j, found = 0; 

    printf("Enter the no. of numbers you have to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Element num[%d]: ", i);
        scanf("%d", &num[i]);
    }

    printf("Enter the target number: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (num[i] + num[j] == target) {
                printf("Pair found: [%d, %d]\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No valid pair found\n");
    }

    return 0;
}
