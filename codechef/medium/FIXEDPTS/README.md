# FIXEDPTS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Fixed Points

For a permutation $P$ of the integers $[1, N]$, a fixed point is an index $i$ such that $P_i = i$.

Given $N$ and $K$, determine whether there exists a permutation $P$ of the integers $[1, N]$ which has  **exactly**  $K$ fixed points.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line contains $2$ integers $N$ and $K$.
### Output Format

For each test case, output $\text{Yes}$ if there exists such a permutation, and $\text{No}$ otherwise.

### Constraints
- $1 \le T \le 6000$
- $1 \le N \le 100$
- $0 \le K \le N$
### Sample 1:
Input
Output

```
5
1 0
1 1
2 0
2 1
3 1

```

```
No
Yes
Yes
No
Yes

```

### Explanation:

 **Test Case 1 & 2:**  The only permutation of size $1$ is $[1]$, which has $1$ fixed point, not $0$.

 **Test Case 3:**  $[2, 1]$ has $0$ fixed points.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T14:36:27.548Z  

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
    vll a(n),b(n);
    ll count=0;
    if(k==n||n-k>=2) yes();
    else no();
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

[View on CodeChef](https://www.codechef.com/problems/FIXEDPTS)