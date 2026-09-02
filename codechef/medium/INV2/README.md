# INV2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inversions II

Let $f(A)$ denote the maximum value of $A_i + A_j$ such that $1 \le i < j \le |A|$ and $A_i > A_j$. If no such valid pair exists, $f(A)$ is $0$.

Given $N$, find the sum of $f(A)$ over all permutations of $[1, N]$ modulo $998244353$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains a single integer $N$.
### Output Format

For each test case, output the sum of $f(A)$ over all permutations modulo $998244353$.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 2 \cdot 10^5$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
2
3
4
100

```

```
3
22
140
504678165

```

### Explanation:

 **Test Case 1:**  $f([1, 2]) = 0$ because there is no valid pair, and $f([2, 1]) = 3$ because $(i, j) = (1, 2)$ is valid with $A_i + A_j = 3$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:55:23.939Z  

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

[View on CodeChef](https://www.codechef.com/problems/INV2)