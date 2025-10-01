int removeDuplicates(int* nums, int numsSize) {
        if(numsSize <= 2) return numsSize;
        int left = 2;
        for(int *right = nums; right < nums + numsSize; right++)                                if(nums[left - 2] != *right)
                nums[left++] = *right;                                                          return left;
}
