## Problem: Two Sum (Easy)

**LeetCode Link:** https://leetcode.com/problems/two-sum/

### Approach

Use two nested loops to check every pair of different elements. When their sum equals the target, return their indices.

### Complexity

- Time: O(n²)
- Space: O(1) auxiliary space (excluding the returned result array)

### Notes

Tested locally with a typical case [2, 7, 11, 15], target 9, and an edge case [3, 3], target 6. Both returned [0, 1].