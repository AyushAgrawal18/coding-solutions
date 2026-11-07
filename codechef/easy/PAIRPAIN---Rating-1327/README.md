# PAIRPAIN - Rating 1327

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Pair Pain

You are given an array $A$ containing $N$ positive integers. Find the number of pairs $(i,j)$ such that $1 \leq i \lt j \leq N$ and: $A_i + A_j \geq A_i \cdot A_j$

### Input Format
- The first line contains an integer $T$ denoting the number of test cases. The $T$ test cases then follow.
- The first line of each test case contains an integer $N$.
- The second line of each test case contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the required answer.

### Constraints
- $1 \le T \le 1000$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le 10^6$
- Sum of $N$ over all cases won't exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
2
3
1 3 4
5
2 3 4 5 6
```

```
2
0
```

### Explanation:

 **Test case $1$:**  The two pairs are $(1, 2)$ and $(1, 3)$, because:

- $A_1 + A_2 = 4 \gt 3 = A_1 \cdot A_2$
- $A_1 + A_3 = 5 \gt 4 = A_1 \cdot A_3$

 **Test case $2$:**  No pairs satisfy the condition.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T07:43:58.804Z  

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
    vll a(n);
    loop cin>>a[i];
    ll one=0,two=0;
    loop{
        if(a[i]==1) one++;
        if(a[i]==2) two++;
    }
    ll ans=(one*(n-one))+(two*(two-1)/2)+(one*(one-1)/2);
    cout<<ans<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/PAIRPAIN)