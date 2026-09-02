# Best Time to Buy and Sell Stock II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

On each day, you may decide to buy and/or sell the stock. You can only hold  **at most one**  share of the stock at any time. However, you can sell and buy the stock multiple times on the  **same day**, ensuring you never hold more than one share of the stock.

Find and return  *the  **maximum**  profit you can achieve*.

 

 **Example 1:** 

```
Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.

```

 **Example 2:** 

```
Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Total profit is 4.

```

 **Example 3:** 

```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

```

 

 **Constraints:** 

- 1 <= prices.length <= 3 * 104
- 0 <= prices[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 13 ms (beats 19.43%)  
**Memory:** 24.6 MB (beats 33.46%)  
**Submitted:** 2026-09-02T17:37:50.898Z  

```cpp
class Solution {
public:

    // int solve(int i, vector<int> &a, int buy, vector<vector<int>> &dp){
    //     int n=a.size();

    //     if(i==n+1) return 0;
    //     if(dp[i][buy]!=-1) return dp[i][buy];

    //     int profit;
    //     if(buy){
    //         profit=max(-a[i-1]+solve(i+1, a, 0, dp), solve(i+1, a, 1, dp));
    //     }
    //     else{
    //         profit=max(a[i-1]+solve(i+1, a, 1, dp), solve(i+1, a, 0, dp));
    //     }
    //     return dp[i][buy] = profit;
    // }

    int maxProfit(vector<int>& prices) {
        int buy = 1;
        int n=prices.size();
        // vector<vector<int>> dp(prices.size()+1, vector<int> (2, -1));
        // return solve(1, prices, buy, dp);
        vector<vector<int>> dp(n+2, vector<int>(2,0));
        for (int i = n; i >= 1; i--) {

            dp[i][1] = max(
                -prices[i - 1] + dp[i + 1][0],  
                dp[i + 1][1]                    
            );

            dp[i][0] = max(
                prices[i - 1] + dp[i + 1][1],   
                dp[i + 1][0]                    
            );
        }
        return dp[1][1];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)