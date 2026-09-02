# GOODSUBSET

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Good Subset

A set $S$ is said to be good if the following condition holds:

- for all $x, y \in S$, $x \oplus y < x$ $\&$ $y$, where $\oplus$ represents the bitwise XOR operator, and $\&$ represents the Bitwise AND operator.

Define $f(S)$ as the size of the largest good subset of $S$.

You are given an integer $N$. Consider all $2^N - 1$ non-empty subsets of $[1, N]$, and find the sum of $f(S)$ over all of them, modulo $998244353$

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of input contains a single integer $N$.
### Output Format

For each test case, output the sum of $f(S)$ over the $2^N - 1$ non-empty subsets modulo $998244353$.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 2 \cdot 10^5$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
2
3
4
100

```

```
3
9
19
848191366
```

### Explanation:

 **Test Case 1:**  There are $3$ subsets to consider, $\{1\}, \{2\}$ and $\{1, 2\}$. Each of them have a $f$ value of $1$, because $\{1, 2\}$ is not a good subset, and the single element subsets are good.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:47:36.472Z  

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
const int MAXN = 200000;
const ll INF = 1e18;
const double PI = acos(-1);

ll modpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}


vll inv(MAXN + 1);



inline void solve() {
    // Your solution goes here
    int n;
    cin>>n;
    
    vll cnt;
    
    for (int i=0;(1<<i)<=n;i++) {
        int l=1<<i;
        int r=min(n,(1<<(i+1))-1);

        if (l<=r)
            cnt.push_back(r-l+1);
    }
    
    int buckets = cnt.size();
    int mx = *max_element(cnt.begin(), cnt.end());
    
    vll sum(buckets, 1);
    
    vector<ll> comb(buckets, 1);
    
    ll totalSubsets = modpow(2, n);
    ll ans = 0;



     for (int k = 1; k <= mx; k++) {

        ll bad = 1;
        for (int i = 0; i < buckets; i++) {
            bad = bad * sum[i] % MOD;
        }
        ll good = (totalSubsets - bad + MOD) % MOD;

        ans = (ans + good) % MOD;
        for (int i = 0; i < buckets; i++) {
            int c = cnt[i];

            if (k <= c) {
                comb[i] = comb[i] * (c - k + 1) % MOD;
                comb[i] = comb[i] * inv[k] % MOD;
                
                sum[i] += comb[i];
                if (sum[i] >= MOD) sum[i] -= MOD;
            }
        }
    }
    cout << ans << '\n';
    
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

[View on CodeChef](https://www.codechef.com/problems/GOODSUBSET)