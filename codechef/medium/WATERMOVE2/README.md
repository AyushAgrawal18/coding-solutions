# WATERMOVE2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Water Moving (Max)

You have $N$ cups of water, with the $i$-th cup of water containing $A_i$ amount of water.

In one operation, you can do the following:

- Choose $2$ distinct cups $i$ and $j$ ($1 \le i, j \le N, i \ne j$), and move all the water in cup $i$ to cup $j$. After this, cup $i$ contains $0$, and cup $j$ contains $A_i + A_j$ amount of water.

You must perform  **exactly**  $K$ operations.  **Maximize the maximum amount**  of water in any cup at the end of your operations, and report this maximum value.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $2$ integers $N$ and $K$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum value of maximum amount of water in any cup after your operations.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le K \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
2 1
3 1
5 2
1 2 3 4 5
3 100
3 2 2

```

```
4
12
7
```

### Explanation:

 **Test Case 1:**  Move the water from cup $1$ to cup $2$.

 **Test Case 2:**  Move the water from cup $3$ to cup $5$, and then from cup $5$ to cup $4$. Then, the array $A$ looks like $[1, 2, 0, 12, 0]$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T14:32:43.787Z  

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
    for(int i=0;i<min(n,k+1);i++){
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

[View on CodeChef](https://www.codechef.com/problems/WATERMOVE2)