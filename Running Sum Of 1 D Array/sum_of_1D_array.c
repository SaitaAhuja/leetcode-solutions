#include <stdio.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;           
    for (int i = 1; i < numsSize; i++)
        nums[i] += nums[i - 1];       
    return nums;                      
}

int main() {
    int nums[] = {1, 2, 3, 4};        
    int size = 4;                    
    int returnSize;                

    int* ans = runningSum(nums, size, &returnSize);

    printf("Running Sum is: ");
    for (int i = 0; i < returnSize; i++)
        printf("%d ", ans[i]);       
    printf("\n");

    return 0;                          
}
