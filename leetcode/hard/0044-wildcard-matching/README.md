# Wildcard Matching

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an input string (`s`) and a pattern (`p`), implement wildcard pattern matching with support for `'?'` and `'*'` where:

- '?' Matches any single character.
- '*' Matches any sequence of characters (including the empty sequence).

The matching should cover the  **entire**  input string (not partial).

 

 **Example 1:** 

```
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".

```

 **Example 2:** 

```
Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.

```

 **Example 3:** 

```
Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.

```

 

 **Constraints:** 

- 0 <= s.length, p.length <= 2000
- s contains only lowercase English letters.
- p contains only lowercase English letters, '?' or '*'.

## Solution

**Language:** C++  
**Runtime:** 37 ms (beats 78.33%)  
**Memory:** 54.8 MB (beats 13.87%)  
**Submitted:** 2026-09-01T20:39:44.981Z  

```cpp
class Solution {
public:

    bool solve(int i, int j, string &s, string &p, vector<vector<int>> &dp){

        if(i==0 && j==0) return true;
        if(i>0 && j==0) return false;
        if(j>0 && i==0) {
            for(int ii=0;ii<j;ii++){
                if(p[ii]!='*') return false;
            }
            return true;
        }
        if(dp[i][j]!=-1) return dp[i][j];


        if(s[i-1]==p[j-1] || p[j-1]=='?'){
            return dp[i][j]=solve(i-1, j-1, s, p, dp);
        }
        if(p[j-1]=='*'){
            return dp[i][j]=(solve(i, j-1, s, p, dp) || solve(i-1, j, s, p, dp));
        }
        return dp[i][j]=false;
    }


    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return solve(n, m, s, p, dp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/wildcard-matching/)