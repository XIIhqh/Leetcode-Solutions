# 移除元素

> **难度**：简单
> **标签**：数组、双指针  
> **链接**：[LeetCode 问题 27 - 移除元素](https://leetcode.cn/problems/remove-element/)

## 问题描述

给定一个整数数组 `nums` 和一个整数 `val`：
- 需要原地修改数组 `nums`，使得数组的前 `k` 个元素包含所有不等于 `val` 的元素。
- 返回 `k`。

**约束条件：**
- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

**示例：**
```
输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2,_,_]
```

## 解题方法

### 方法 1：双指针
**思路**：使用两个指针，一个指针遍历数组，另一个指针跟踪非 `val` 元素的放置位置。

**步骤：**
1. 初始化计数器 `k`，从 0 开始。
2. 遍历数组中的每个元素。
3. 如果当前元素不等于 `val`：
   - 将其复制到数组的位置 `k`。
   - 递增 `k`。
4. 返回 `k` 作为新长度。

## 复杂度分析

**时间复杂度**：O(n)
- 只遍历数组一次。

**空间复杂度**：O(1)
- 仅使用了常量级的额外空间。

## 关键点

- 一个指针用于遍历数组，另一个指针用于记录非 `val` 元素的位置。
- 原地修改数组。
- 处理边缘情况：空数组、所有元素都等于 `val`、没有元素等于 `val`。

## 相关题目

- [删除排序数组中的重复项](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [移动零](https://leetcode.com/problems/move-zeroes/)
- [移除链表元素](https://leetcode.com/problems/remove-linked-list-elements/)

