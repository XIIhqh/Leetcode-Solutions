# Move Zeroes

> **Difficulty**: Easy
> **Tags**: Array, Two Pointers
> **Link**: [LeetCode Problem 283 - Move Zeroes](https://leetcode-cn.com/problems/move-zeroes/)

## Problem Description

Given an integer array `nums`.
- move all 0's to the end of it.
- maintain the relative order of the non-zero elements.
- do this in-place without making a copy of the array.

**Constraints:**
- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

**Example:**
```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```

## Solution Approaches

### Approach: Two Pointers
**Idea**: Use two pointers where one pointer tracks the position to place the next non-zero element, and the other traverses the array to find non-zero elements.

**Steps:**
1. Initialize `left` pointer to track the position for the next non-zero element
2. Traverse the array with `right` pointer
3. When `right` pointer finds a non-zero element:
   - Swap elements at `left` and `right` positions
   - Increment `left` pointer
4. This ensures all non-zero elements are moved to the front while maintaining their relative order

## Complexity Analysis

**Time Complexity**: O(n)
- Traverse the array exactly once

**Space Complexity**: O(1)
- Only use a constant amount of extra space for pointers

## Key Points

- Two pointers: one for tracking position, one for traversal
- Swap non-zero elements to the front
- Maintain relative order of non-zero elements
- In-place modification without extra array
- Efficient single-pass solution

## Related Problems

- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Remove Element](https://leetcode.com/problems/remove-element/)
- [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)
