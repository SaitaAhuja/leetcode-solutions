#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    int k = 0;
    char* result = (char*)malloc(10005 * sizeof(char)); 
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    
    result[k] = '\0';
    
    for (int x = 0; x < k / 2; x++) {
        char temp = result[x];
        result[x] = result[k - 1 - x];
        result[k - 1 - x] = temp;
    }
    
    return result;
}

int main() {
    char a[] = "1010";
    char b[] = "1011";
    printf("%s\n", addBinary(a, b));  // Output: "10101"
    return 0;
}
