## Problem: Reverse String (Easy)

**LeetCode Link:** https://leetcode.com/problems/reverse-string/

### Approach

Use two pointers, one starting from the beginning and one from the end. Swap the characters at these positions and move both pointers toward the center until the string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The string is modified in-place as required by the problem. The solution uses only one temporary character variable for swapping.