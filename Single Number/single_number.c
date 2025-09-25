#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];   // pairs cancel
    }
    return result;
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int ans = singleNumber(nums, size);
    printf("The single number is: %d\n", ans);
    return 0;
}
