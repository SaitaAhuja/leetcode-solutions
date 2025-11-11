#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convertToTitle(int columnNumber) {
    char* result = (char*)malloc(20 * sizeof(char)); // Allocate memory
    int index = 0;

    while (columnNumber > 0) {
        columnNumber--; // Adjust for 1-based indexing
        int remainder = columnNumber % 26;
        result[index++] = 'A' + remainder;
        columnNumber /= 26;
    }

    result[index] = '\0';

    // Reverse the string
    for(int i = 0; i < index/2; i++) {
        char temp = result[i];
        result[i] = result[index-1-i];
        result[index-1-i] = temp;
    }

    return result;
}

int main() {
    int n = 28;
    char* title = convertToTitle(n);
    printf("%s\n", title); // Output: AB
    free(title);
    return 0;
}
