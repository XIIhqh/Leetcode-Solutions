# Remove Duplicates from Sorted Array II

> **Difficulty**: Medium
> **Tags**: Array, Two Pointers
> **Link**: [LeetCode Problem 80 - Remove Duplicates from Sorted Array II](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/)

## Problem Description

Given an integer array `nums` sorted in non-decreasing order.
- remove some duplicates in-place such that each unique element appears at most twice.
- Return `k` after placing the final result in the first `k` slots of `nums`.

**Constraints:**
- `1 <= nums.length <= 3 * 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in non-decreasing order

**Example:**
```
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
```

## Solution Approaches

### Approach 1: Two Pointers
**idea**: Use two pointers where one pointer traverses the array and the other keeps track of the position to place valid elements (elements that appear at most twice).

**Steps:**
1. If array length is ≤ 2, return the length directly
2. Initialize `left = 2` (first two elements are always valid)
3. Traverse the array starting from the third element
4. If current element is different from the element two positions before `left`, copy it to `left` position and increment `left`
5. Return `left` as the new length

## Complexity Analysis

**Time Complexity**: O(n)
- Traverse the array exactly once

**Space Complexity**: O(1)
- Only use a constant amount of extra space

## Key Points

- One for traversing, one for tracking valid position
- Compare with element two positions before to check duplicates
- In-place modification
- Handles edge cases: short arrays, all duplicates, no duplicates

## Related Problems

- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Remove Element](https://leetcode.com/problems/remove-element/)
- [Move Zeroes](https://leetcode.com/problems/move-zeroes/)
