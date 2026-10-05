## Problem: Valid Anagram (Easy)

**LeetCode Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Use a frequency-count array of size 26. Count how many times each lowercase letter appears in the first string and subtract the counts while scanning the second string. If all 26 counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested on the given examples: "anagram" and "nagaram" returned true, while "rat" and "car" returned false. The solution uses a fixed-size array because the problem specifies lowercase English letters.