# ACCOLITE06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Equal Sum Partition

You are given an array $A$ containing $N$ positive integers.

Determine whether its elements can be divided into two non-empty groups with equal sums. Every array element must belong to exactly one group. Elements with the same value are treated as separate occurrences.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains an integer $N$, the size of the array. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, print `YES` if such a partition exists, or `NO` otherwise, on a separate line.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
2
4
1 5 11 5
3
1 3 5
```

```
YES
NO
```

### Explanation:

 **Test Case 1:**  Can be divided into [1,5,5] and [11]
 **Test Case 2:**  Cannot be divided

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T14:27:30.343Z  

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

bool ans(ll i, vll &a, ll tar, vector<vll> &dp){
    if(tar==0) return true;
    if(i<0) return false;
    if(dp[i][tar]!=-1) return dp[i][tar];
    
    
    bool take=false;
    if(a[i]<=tar){
        take=ans(i-1, a, tar-a[i],dp);
    }
    bool not_take=ans(i-1, a, tar, dp);
    
    return dp[i][tar]=take||not_take;
}



inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    ll sum=accumulate(a.begin(), a.end(), 0LL);
    if(sum%2!=0){
        no();
        return;
    }
    ll target=sum/2;
    vector<vll> dp(n, vll (target+1, -1));
    bool flag=ans(n-1,a,target,dp);
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

[View on CodeChef](https://www.codechef.com/problems/ACCOLITE06)