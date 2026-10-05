## Problem: Best Time to Buy and Sell Stock (Easy)

**LeetCode Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Keep track of the minimum stock price seen so far. For each price, calculate the profit that would be made by selling at that price. Update the maximum profit whenever a higher profit is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with a typical case [7, 1, 5, 3, 6, 4], which returned 5, and an edge case [7, 6, 4, 3, 1], which returned 0.