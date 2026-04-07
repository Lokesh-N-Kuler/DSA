/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    int left = 0;
    int right = numsSize - 1;
    int k = numsSize - 1;  // fill from end

    while (left <= right) {
        int leftSq = nums[left] * nums[left];
        int rightSq = nums[right] * nums[right];

        if (leftSq > rightSq) {
            result[k] = leftSq;
            left++;
        } else {
            result[k] = rightSq;
            right--;
        }
        k--;
    }

    *returnSize = numsSize;
    return result;

}