# AVGGIFT - Rating 1701

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Average Gift

Chef has a set $S$ containing $N$  **distinct**  integers.

Chef wants to gift Chefina an array $A$ of any finite length such that the following conditions hold true:

- $A_i \in S$ $\forall i$. In other words, each element of the array $A$ should belong to the set $S$.
- Mean value of all the elements in $A$ is exactly $X$.

Find whether there exists an array $A$ of finite length satisfying the above conditions.

### Input Format
- First line will contain $T$, the number of test cases. Then the test cases follow.
- First line of each test case contains two integers $N$ and $X$ - denoting the size of set $S$ and the mean value of the required array.
- Second line contains $N$ distinct integers $S_1, S_2, \dots, S_N$ - denoting the set $S$.
### Output Format

For each test case, output in a single line, `YES` if there exists an array satisfying the given conditions, `NO` otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N \leq 10^5$
- $1 \leq S_i \leq 10^9$
- $1 \leq X \leq 10^9$
- $S_i \neq S_j$ for $i \neq j$
- Sum of $N$ over all test case do not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
3 2
1 2 3
1 5
3
2 5
4 6
1 5
5

```

```
YES
NO
YES
YES

```

### Explanation:

 **Test Case $1$:**  One of the valid arrays is $A = [2,2]$. Here, $2 \in \{1, 2, 3\}$. Also, mean value of the array is $\frac{2+2}{2} = 2$.

 **Test Case $2$:**  Since all elements of the array can only be equal to $3$, the mean value of $A$ cannot be equal to $5$.

 **Test Case $3$:**  One of the valid arrays is $A = [4,6]$. Here, $4 \in \{4, 6\}$ and $6 \in \{4, 6\}$. Also, mean value of the array is $\frac{4+6}{2} = 5$.

 **Test Case $4$:**  One of the valid arrays is $A = [5]$. Here, $5 \in \{5\}$. Also, mean value of the array is $\frac{5}{1} = 5$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T21:15:49.445Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

/* 
  ****************************************************
  *                                                  *
  *             COMPETITIVE PROGRAMMING              *
  *                                                  *
  *            Author: Ayush Kumar Agrawal           *
  *                  Code Smart, Win Big             *
  *                                                  *
  ****************************************************
*/

#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define loop for(int i = 0; i < n; i++)
#define rloop for(int i = n-1; i >= 0; i--)
#define yes() cout << "YES\n"
#define no() cout << "NO\n"

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);


bool solve(int i, long long sum, vll &a, int count, int x,vector<vector<int>> &dp) {
    if (i < 0) {
        return count>0&&sum/count==x;
    }
    if(dp[i][count]!=-1) return dp[i][count];

    if (solve(i - 1, sum, a, count, x, dp))
        return dp[i][count] = true;

    if (solve(i - 1, sum + a[i], a, count + 1, x, dp))
        return dp[i][count] = true;

    return dp[i][count] = false;
}



inline void solve() {
    // Your solution goes here
    int n,x;
    cin>>n>>x;
    vll a(n);
    loop cin>>a[i];
    int count=0;
    // cout<<solve(n-1, x, a, count)<<endl;
    vector<vector<int>> dp(n, vector<int> (n+1, -1));
    bool flag=solve(n-1, 0, a, count, x, dp);
    if(flag) yes();
    else no();
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/AVGGIFT)