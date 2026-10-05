## Problem: Contains Duplicate (Easy)

**LeetCode Link:** https://leetcode.com/problems/contains-duplicate/

### Approach

Use two loops to compare each element with every element that comes after it. If any two elements are equal, the array contains a duplicate.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution checks all pairs of elements and returns true as soon as a duplicate is found. If no duplicate is found, it returns false.
