# MSTEX

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Most Expensive Items

Chef is given the prices of $N$ items and wants to buy exactly $K$ of them.

Find the  **maximum possible total price**  of the $K$ items he can choose.

### Input Format

The first line contains an integer $T$ — the number of test cases.

For each test case:

- The first line contains two space-separated integers $N$ and $K$ — the number of items and the number of items Chef wants to buy.
- The second line contains $N$ space-separated integers $C_1,C_2,\ldots,C_N$ — the prices of the items.
### Output Format

For each test case, print a single integer — the total cost of the $K$ most expensive items.

### Constraints
- $1 \le T \le 100$
- $1 \le K \le N \le 100$
- $1 \le C_i \le 100$
### Sample 1:
Input
Output

```
3
5 2
4 9 1 7 6
4 3
10 3 8 5
6 1
2 11 4 9 7 5
```

```
16
23
11
```

### Explanation:

For the first test case, the two highest prices are $9$ and $7$.

$9+7=16$

For the second test case, the three highest prices are $10$, $8$, and $5$.

$10+8+5=23$

For the third test case, Chef buys only the most expensive item, which costs $11$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T13:33:02.556Z  

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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    loop cin>>a[i];
    sort(rall(a));
    ll ans=0;
    for(int i=0;i<k;i++){
        ans+=a[i];
    }
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

[View on CodeChef](https://www.codechef.com/problems/MSTEX)