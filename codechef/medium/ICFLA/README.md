# ICFLA

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Ice Cream Flavours

Tema makes ice cream cones using  **exactly two balls**. Each ball has a flavour represented by a positive integer.

A cone may contain two balls of the same flavour or two different flavours. The order of the balls does not matter, so $\{1,2\}$ and $\{2,1\}$ represent the same type, while $\{1,1\}$ and $\{1,2\}$ represent different types.

Tema does not need to make all cones at the same time, so the same balls may be reused for different cones. However, to make a cone of type $\{x,x\}$, he must have at least two balls of flavour $x$.

Given an integer $N$, find the  **minimum number of balls**  Tema must have so that he can make exactly $N$ different types of ice cream.

### Input Format
- The first line contains an integer $N$ — the number of different ice cream types Tema wants to make.
### Output Format
- Print a single integer — the minimum number of balls required.
### Constraints
- $1 \le N \le 10^{18}$
### Sample 1:
Input
Output

```
6
```

```
4
```

### Explanation:

With $4$ balls of distinct flavours, for example $\{1,2,3,4\}$, Tema can make $6$ different types:

$\{1,2\},\{1,3\},\{1,4\},\{2,3\},\{2,4\},\{3,4\}$.

With fewer than $4$ balls, it is not possible to make $6$ different types.

Therefore, the minimum number of balls required is  **4**.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T14:28:17.747Z  

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



inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    ll lo=1, hi= 2000000000LL;
     while (lo < hi) {
        ll mid=lo+(hi-lo+1)/2;
        __int128 pairs=(__int128)mid*(mid-1)/2;
        if(pairs<=n)
            lo=mid;
        else
            hi=mid-1;
    }
    ll d = lo;
    ll diff=(ll)((__int128)d*(d-1)/2);
    ll same=n-diff;

    cout<<d+same;
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

[View on CodeChef](https://www.codechef.com/problems/ICFLA)