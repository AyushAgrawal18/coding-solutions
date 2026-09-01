# CHPWR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Champagne Tower

Champagne glasses are arranged in a pyramid of $100$ rows. The first row contains $1$ glass, the second row contains $2$ glasses, and so on.

Each glass can hold at most  **1 cup**  of champagne.

Champagne is poured into the top glass. Whenever a glass contains more than $1$ cup, the excess champagne is divided equally between the two glasses directly below it.

Given the amount of champagne poured P and a glass at position $(R,C)$, determine how full that glass becomes.

Rows and glasses are  **0-indexed**, so the top glass is at $(0,0)$.

### Input Format
- The first line contains three space-separated integers $P$, $R$, and $C$ — the number of cups poured, the row of the queried glass, and its position in that row.
### Output Format
- Print a single floating-point number — how full the queried glass is, formatted to exactly 5 decimal places.

The answer will always be between $0$ and $1$, inclusive.

### Constraints
- $0 \le P \le 10^9$
- $0 \le C \le R \lt 100$
### Sample 1:
Input
Output

```
4 2 0
```

```
0.25000
```

### Explanation:

After pouring $4$ cups, the two glasses in row $1$ each contain $1.5$ cups before overflow.

Each of them keeps $1$ cup and passes the remaining $0.5$ cup equally to the two glasses below.

Therefore, the glass at position $(2,0)$ receives $0.25$ cup and is  **$0.25$ full**.

### Sample 2:
Input
Output

```
2 1 1
```

```
0.50000
```

### Explanation:

The top glass can hold only $1$ cup, so after pouring $2$ cups, $1$ cup overflows.

This excess champagne is divided equally between the two glasses in row $1$.

Therefore, the glass at position $(1,1)$ receives $0.5$ cup, so its fullness is: 0.50000

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-01T22:24:39.540Z  

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
    int p,r,c;
    cin>>p>>r>>c;
    int need=1;
    // int curr_glass=1;
    double ans;
    
    for(int i=0;i<=r;i++){
        if(need<=p){
            ans=1;
            p-=need;
        }
        else{
            ans=(double)p/(double)need;
            p=0;
        }
        // curr_glass*=2;
        need*=2;
    }
    cout<<fixed<<setprecision(5)<<ans;
    
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

[View on CodeChef](https://www.codechef.com/problems/CHPWR)