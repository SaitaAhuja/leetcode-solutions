#include <stdio.h>
#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Compare characters of first string with all other strings
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            // If mismatch or shorter string reached → terminate prefix
            if (strs[j][i] != c) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];  // the whole first string is the prefix
}

int main() {
    // Example input (you can change / test)
    char *strs[] = {"flower", "flow", "flight"};
    int size = sizeof(strs) / sizeof(strs[0]);

    char *result = longestCommonPrefix(strs, size);
    printf("Longest Common Prefix: \"%s\"\n", result);

    return 0;
}
