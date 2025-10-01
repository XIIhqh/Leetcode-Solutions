# Remove Element

> **Difficulty**: Easy
> **Tags**: Array, Two Pointers
> **Link**: [LeetCode Problem 27 - Remove Element](https://leetcode.cn/problems/remove-element/)

## Problem Description

Given an integer array `nums` and an integer `val`.
- Change the array `nums` in-place such that the first `k` elements of `nums` contain the elements which are not equal to `val`.
- Return k.

**Constraints:**
- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

**Example:**
```
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
```

## Solution Approaches

### Approach 1: Two Pointers
**idea**: Use two pointers where one pointer iterates through the array and the other keeps track of the position to place non-val elements.

**Steps:**
1. Initialize a counter `k` starting at 0
2. Iterate through each element in the array
3. If the current element is not equal to `val`:
   - Copy it to position `k` in the array
   - Increment `k`
4. Return `k` as the new length

## Complexity Analysis

**Time Complexity**: O(n)
- Traverse the array exactly once

**Space Complexity**: O(1)
- Only use a constant amount of extra space

## Key Points

- One iterates through the array, another tracks position for non-val elements
- In-place modification
- Handles edge cases: empty array, all elements equal to val, no elements equal to val

## Related Problems

- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Move Zeroes](https://leetcode.com/problems/move-zeroes/)
- [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)
