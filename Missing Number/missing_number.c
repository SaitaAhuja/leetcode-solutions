#include <stdio.h>

// Function to find the missing number
int missingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    int sum = 0;

    for (int i = 0; i < numsSize; i++)
        sum += nums[i];

    return total - sum;
}

int main() {
    // Example input
    int nums[] = {3, 0, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = missingNumber(nums, numsSize);
    printf("Missing Number: %d\n", result);

    return 0;
}
