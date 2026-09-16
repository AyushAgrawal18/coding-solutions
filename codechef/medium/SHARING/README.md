# SHARING

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sharing Cookies

Alice received $A$ cookies and Bob received $B$ cookies individually, but being good friends, they want to share them equally. Alice received more cookies than Bob, i.e. $A > B$.

Is it possible for Alice and Bob to share such that they both have equal number of cookies? Find the number of cookies Alice has to give Bob in that case, and otherwise print $-1$ to denote it is impossible.

### Input Format
- The first and only line contains $2$ integers $A$ and $B$.
### Output Format

Output the number of cookies Alice needs to give Bob or $-1$ if impossible.

### Constraints
- $1 \le B \lt A \le 10$
### Sample 1:
Input
Output

```
6 2

```

```
2

```

### Explanation:

If Alice gives Bob $2$ cookies, he has $6 - 2 = 4$ cookies left, and Bob has $2 + 2 = 4$ cookies. Hence, both have equal number of cookies.

### Sample 2:
Input
Output

```
5 2

```

```
-1

```

### Explanation:

The total number of cookies is $7$, which is not dividable fairly between Alice and Bob.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T15:58:24.239Z  

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
    ll a,b;
    cin>>a>>b;
    int sum=a+b;
    if(sum&1) cout<<-1;
    else cout<<(a-b)/2;
    
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

[View on CodeChef](https://www.codechef.com/problems/SHARING)