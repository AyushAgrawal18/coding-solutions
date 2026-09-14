# GPCK

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Gift Packs

Chef is preparing gifts for a school event. He has $A$ notebooks and $B$ pens.

Each gift pack must contain  **one notebook and one pen**. Each item can be used in only one pack.

Find the  **maximum number of complete gift packs**  Chef can prepare.

### Input Format

The only line contains two integers $A$ and $B$ — the number of notebooks and pens.

### Output Format

Print a single integer — the maximum number of complete gift packs.

### Constraints
- $0 \le A,B \le 1000$
### Sample 1:
Input
Output

```
5 3
```

```
3
```

### Explanation:

Chef can prepare $3$ gift packs using $3$ notebooks and all $3$ pens. The remaining $2$ notebooks cannot form another complete pack.

### Sample 2:
Input
Output

```
2 6
```

```
2
```

### Explanation:

Chef has only $2$ notebooks, so he can prepare at most $2$ gift packs.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T13:37:56.078Z  

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
    ll n,m;
    cin>>n>>m;
    cout<<min(n,m);
    
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

[View on CodeChef](https://www.codechef.com/problems/GPCK)