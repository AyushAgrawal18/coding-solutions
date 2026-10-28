# XORQUADS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Xor Quadruples

 *As always, Hyder seeks Order in Chaos. This time, he believes that Xor Quadruples are the key to finding order in an array of integers. Help him out!* 

You are given an array $A$ of $N$ non-negative integers. Find four indices $i, j, k, l$ such that $1 \le i \lt j \lt k \lt l \le N$ and all of the following conditions hold:

- $A_i \oplus A_j \lt A_k$
- $A_i \gt A_j \oplus A_k$
- $A_j \oplus A_k \lt A_l$
- $A_j \gt A_k \oplus A_l$

Here, $\oplus$ denotes the bitwise XOR operation.

If multiple valid quadruples exist, you may output any of them. If no such quadruple exists, output $-1$.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, the size of the array. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, print four space-separated integers $i, j, k, l$ satisfying all the given conditions, with $i \lt j \lt k \lt l$. All indices are $1$-based.

If no such quadruple exists, print $-1$.

If multiple valid quadruples exist, you may output any of them.

### Constraints
- $1 \le T \le 100$
- $4 \le N \le 3000$
- The sum of $N$ over all test cases does not exceed $3000$.
- $0 \le A_i \lt 2^{20}$
### Sample 1:
Input
Output

```
4
4
5 3 7 6
7
0 0 10 12 0 12 10
7
0 9 7 0 3 1 0
10
31 797 476 335 452 606 863 201 532 240

```

```
1 2 3 4
3 4 6 7
-1
1 3 5 8
```

### Explanation:

 **Test case $1$:**  For $(i, j, k, l) = (1, 2, 3, 4)$, we have $A_i \oplus A_j = 6 \lt 7 = A_k$, $A_i = 5 \gt 4 = A_j \oplus A_k$, $A_j \oplus A_k = 4 \lt 6 = A_l$ and $A_j = 3 \gt 1 = A_k \oplus A_l$. All four conditions hold.

 **Test case $3$:**  It can be verified that no valid quadruple exists.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T15:24:56.993Z  

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

[View on CodeChef](https://www.codechef.com/problems/XORQUADS)