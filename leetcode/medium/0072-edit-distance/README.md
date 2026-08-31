# Edit Distance

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two strings `word1` and `word2`, return  *the minimum number of operations required to convert `word1` to `word2`*.

You have the following three operations permitted on a word:

- Insert a character
- Delete a character
- Replace a character

 

 **Example 1:** 

```
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')

```

 **Example 2:** 

```
Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')

```

 

 **Constraints:** 

- 0 <= word1.length, word2.length <= 500
- word1 and word2 consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 34.40%)  
**Memory:** 14.3 MB (beats 18.09%)  
**Submitted:** 2026-08-31T19:39:48.378Z  

```cpp
class Solution {
public:

    int solve(int i, int j, string &a, string &b, vector<vector<int>> &dp){
        if(i<0) return j+1;
        if(j<0) return i+1;

        if(dp[i][j]!=-1) return dp[i][j];

        if(a[i]==b[j]){
            return dp[i][j]=solve(i-1, j-1, a, b, dp);
        }
        int insert = solve(i, j-1, a, b, dp);
        int del = solve(i-1, j, a, b, dp);
        int replace = solve(i-1, j-1, a, b, dp);
        return dp[i][j]=1 + min({insert, del, replace});
    }

    int minDistance(string a, string b) {
        int n=a.size();
        int m=b.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return solve(n-1, m-1, a, b, dp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/edit-distance/)