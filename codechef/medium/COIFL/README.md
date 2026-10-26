# COIFL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coin Flip

A coin has $1$ printed on one side and $2$ on the other. Each flip adds the number on the face-up side to a running sum, initially $0$.

Find the number of distinct sequences of flips whose sum is exactly $S$. Two sequences are different if they differ in length or in the result of at least one flip. For example, $(1, 2)$ and $(2, 1)$ are different sequences.

### Input Format

The input contains a single integer $S$, the required sum.

### Output Format

Print the number of distinct sequences of flips whose sum is exactly $S$.

### Constraints
- $1 \le S \le 20$
### Sample 1:
Input
Output

```
3
```

```
3
```

### Explanation:

To achieve a sum of 3, there are three ways:

- (1, 2)
- (2, 1)
- (1, 1, 1)
### Sample 2:
Input
Output

```
2
```

```
2
```

### Explanation:

To achieve a sum of 2, there are two ways:

- (1, 1)
- (2)

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T13:57:12.870Z  

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

ll ans(ll s){
    if(s==0) return 1;
    if(s<0) return 0;
    return ans(s-1)+ans(s-2);
}



inline void solve() {
    // Your solution goes here
    ll s;
    cin>>s;
    cout<<ans(s)<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/COIFL)