#include <stdio.h>
int addDigits(int num) {
    while (num >= 10) {
        int sum = 0, n = num;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        num = sum;
    }
    return num;
}
int main() {
    int num, result;
    printf("Enter a non-negative number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Enter a non-negative integer!\n");
        return 0;
    }
    result = addDigits(num);
    printf("The single-digit result is: %d\n", result);
    return 0;
}
