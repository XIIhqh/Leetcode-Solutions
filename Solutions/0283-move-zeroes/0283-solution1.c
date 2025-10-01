void moveZeroes(int* nums, int numsSize){
	for(int *left = nums, *right = nums; right < nums + numsSize; right++)
		if(*right){
			int tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
		}
}
