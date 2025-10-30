#include <stdio.h>

int main() {
    int digitsSize;
    printf("Enter number of digits: ");
    scanf("%d", &digitsSize);

    int digits[digitsSize];
    for(int i = 0; i < digitsSize; i++) {
        printf("Enter digit %d: ", i+1);
        scanf("%d", &digits[i]);
    }

    digits[digitsSize - 1] += 1;

    for(int i = digitsSize - 1; i > 0; i--) {
        if(digits[i] == 10) {
            digits[i] = 0;
            digits[i-1] += 1;
        }
    }
    printf("Result: [");
    if(digits[0] == 10) { // special case when first digit becomes 10
        printf("1,0");
        for(int i = 1; i < digitsSize; i++) printf(",%d", digits[i]);
    } else {
        printf("%d", digits[0]);
        for(int i = 1; i < digitsSize; i++) printf(",%d", digits[i]);
    }
    printf("]\n");

    return 0;
}
