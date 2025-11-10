#include <stdio.h>
#include <string.h>

int titleToNumber(char *columnTitle) {
    int result = 0;

    for (int i = 0; columnTitle[i] != '\0'; i++) {
        char ch = columnTitle[i];

        if (ch < 'A' || ch > 'Z') {
            printf("Invalid input: only uppercase A-Z are allowed.\n");
            return -1;
        }

        int value = ch - 'A' + 1;
        result = result * 26 + value;
    }

    return result;
}

int main() {
    char columnTitle[20];

    printf("Enter Excel column title (e.g., A, AB, ZY): ");
    scanf("%s", columnTitle);

    int columnNumber = titleToNumber(columnTitle);

    if (columnNumber != -1)
        printf("Column Number for '%s' = %d\n", columnTitle, columnNumber);

    return 0;
}
