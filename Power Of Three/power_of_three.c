#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
    if (n <= 0)
        return false;

    while (n % 3 == 0) {
        n /= 3;
    }

    return n == 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfThree(num))
        printf("%d is a Power of 3\n", num);
    else
        printf("%d is NOT a Power of 3\n", num);

    return 0;
}
