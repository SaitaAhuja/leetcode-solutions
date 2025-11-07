#include <stdio.h>

int main() {
    int num, sum, digit;

    printf("Enter number: ");
    scanf("%d", &num);

    int temp = num; 

    while (1) {
        sum = 0;   

        while (temp > 0) {
            digit = temp % 10;       
            sum += digit * digit;    
            temp /= 10;            
        }

        if (sum == 1) {
            printf("%d is a Happy Number!\n", num);
            break;
        } else if (sum == 4) {
            printf("%d is NOT a Happy Number.\n", num);
            break;
        }

        temp = sum;
    }

    return 0;
}
