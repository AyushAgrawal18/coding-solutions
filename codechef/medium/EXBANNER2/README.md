# EXBANNER2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Banner Checksums (Easy)

There was a matrix $A$ of size $n \times m$. You know the Bitwise AND, OR and XOR of every row and column of the matrix, i.e. you know the following:

- $RX_i = A_{i,1} \oplus A_{i,2} \oplus \cdots \oplus A_{i,m}$
- $RO_i = A_{i,1} \mid A_{i,2} \mid \cdots \mid A_{i,m}$
- $RA_i = A_{i,1} \,\&\, A_{i,2} \,\&\, \cdots \,\&\, A_{i,m}$
- $CX_j = A_{1,j} \oplus A_{2,j} \oplus \cdots \oplus A_{n,j}$
- $CO_j = A_{1,j} \mid A_{2,j} \mid \cdots \mid A_{n,j}$
- $CA_j = A_{1,j} \,\&\, A_{2,j} \,\&\, \cdots \,\&\, A_{n,j}$

Here $\oplus$, $\mid$ and $\&$ denote the bitwise XOR, OR and AND operations.

Rebuild any grid $A$ with $0 \leq A_{i,j} < 2^{30}$ that matches all $3(n+m)$ logged values, or report that there exists no valid grid.

In this version of the problem, the input satisfies the following constraints:

- $RA_i = CA_j = 0$
- $RO_i = CO_j = 1$
- $0 \le RX_i, CX_j \le 1$
- $n, m \ge 4$
### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input.
- The first line of each test case contains two space-separated integers $n$ and $m$.
- The $i$-th of the next $n$ lines contains three space-separated integers $RX_i$, $RO_i$ and $RA_i$.
- The $j$-th of the next $m$ lines contains three space-separated integers $CX_j$, $CO_j$ and $CA_j$.
### Output Format

For each test case:

- If no valid grid exists, output a single line containing $-1$.
- Otherwise, output $n$ lines. The $i$-th line should contain $m$ space-separated integers $A_{i,1}, A_{i,2}, \ldots, A_{i,m}$. Every printed value must satisfy $0 \leq A_{i,j} < 2^{30}$. If there are multiple valid grids, you may print any of them.
### Constraints
- $1 \leq T \leq 10^5$
- $4 \leq n, m$ and $n \cdot m \leq 10^5$
- $RA_i = CA_j = 0$
- $RO_i = CO_j = 1$
- $0 \le RX_i, CX_j \le 1$
- The sum of $n \cdot m$ over all test cases does not exceed $10^5$.
### Sample 1:
Input
Output

```
3
4 4
1 1 0
0 1 0
1 1 0
0 1 0
1 1 0
0 1 0
1 1 0
0 1 0
4 4
1 1 0
0 1 0
1 1 0
0 1 0
1 1 0
0 1 0
1 1 0
1 1 0
4 5
1 1 0
1 1 0
1 1 0
1 1 0
1 1 0
1 1 0
1 1 0
1 1 0
0 1 0

```

```
1 0 0 0 
0 0 1 1 
0 1 0 0 
0 1 0 1 
-1
0 0 1 1 1 
1 0 0 0 0 
0 1 0 0 0 
0 0 0 0 1 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T16:03:41.977Z  

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

[View on CodeChef](https://www.codechef.com/problems/EXBANNER2)