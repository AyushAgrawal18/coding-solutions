# VISA09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Minimum Coins

You are given $N$ coin denominations $C_1, C_2, \ldots, C_N$ and a target sum $S$. You have an unlimited supply of coins of each denomination.

Find the minimum number of coins whose total value is exactly $S$. If no combination forms exactly $S$, print $-1$.

### Input Format
- The first line contains two integers $N$ and $S$: the number of coin denominations and the target sum.
- The second line contains $N$ space-separated integers $C_1, C_2, \ldots, C_N$: the coin denominations.
### Output Format

Print the minimum number of coins needed to form exactly $S$, or $-1$ if it is impossible.

### Constraints
- $1 \le N \le 10^2$
- $1 \le S \le 10^6$
- $N \times S \le 10^6$
- $1 \le C_i \le 10^6$
### Sample 1:
Input
Output

```
3 30
25 10 5
```

```
2

```

### Explanation:

Using $25 + 5 = 30$ requires $2$ coins. No available coin has value $30$, so fewer than $2$ coins cannot form the target.

### Sample 2:
Input
Output

```
4 19
9 6 5 1
```

```
3
```

### Explanation:

Using $9 + 9 + 1 = 19$ requires $3$ coins. No single coin or pair of available coins has a total value of $19$, so the minimum is $3$.

### Sample 3:
Input
Output

```
3 5
4 6 2
```

```
-1
```

### Explanation:

All available denominations are even, so every total formed using them is even. Therefore, the target sum $5$ cannot be formed.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T14:04:23.787Z  

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

ll ans(ll i, vll &a, ll s, vector<vll> &dp){
    if(i<0){
        if(s>0) return 1e18;
        return 0;
    }
    if(dp[i][s]!=-1) return dp[i][s];
    
    ll take=1e18;
    if(s>=a[i]){
        take=1+ans(i, a, s-a[i], dp);
    }
    ll not_take=ans(i-1, a, s, dp);
    return dp[i][s]=min(take,not_take);
}



inline void solve() {
    // Your solution goes here
    ll n,s;
    cin>>n>>s;
    vll a(n);
    loop cin>>a[i];
    vector<vll> dp(n,vll(s+1,-1));
    cout<<ans(n-1,a,s,dp)<<endl;
    
}

int main() {
    fastio();
    // int t;
    // cin >> t;
    // while (t--) 
        solve();
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/VISA09)