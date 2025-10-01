int removeElement(int* nums, int numsSize, int val) {
        int k = 0;                                                                              for(int* i = nums; i < nums + numsSize; i++)
                if(*i != val)                                                                                   nums[k++] = *i;
        return k;
}
