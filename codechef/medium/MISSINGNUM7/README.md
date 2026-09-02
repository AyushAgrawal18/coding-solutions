# MISSINGNUM7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Missing Number

Chef had $4$ pieces of paper with him, one paper with $1$ written on it, one paper with $2$, one paper with $3$ and finally one paper with $4$.

Now, Chef lost one of the pieces of paper, and noticed that the other numbers on his papers add up to $S$. Find the number on the missing paper.

### Input Format
- The first and only line of input contains a single integer $S$.
### Output Format

Output the number on the missing paper.

### Constraints
- $6 \le S \le 9$
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

Chef has the papers $1$, $2$ and $3$ with him; as they add up to $6$, so the missing has to be $4$.

### Sample 2:
Input
Output

```
9

```

```
1

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T16:13:30.187Z  

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
    ll s;
    cin>>s;
    cout<<10-s;
    
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

[View on CodeChef](https://www.codechef.com/problems/MISSINGNUM7)