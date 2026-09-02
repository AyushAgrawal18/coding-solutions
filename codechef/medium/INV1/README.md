# INV1

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Inversion I

Let $f(A)$ denote the maximum value of $A_i + A_j$ such that $1 \le i < j \le |A|$ and $A_i > A_j$. If no such valid pair exists, $f(A)$ is $0$.

You are given an array $A$ of $N$ elements.

Find $\sum_{L = 1}^{N} \sum_{R = L}^{N} f([A_L, A_{L + 1}, \ldots, A_R])$, i.e. the sum of $f$ over all subarrays.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the answer $\sum_{L = 1}^{N} \sum_{R = L}^{N} f([A_L, A_{L + 1}, \ldots, A_R])$.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le N$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
3
3
1 3 2
4
2 3 2 3
6
2 4 1 3 6 5

```

```
10
20
93
```

### Explanation:

 **Test Case 1:**  There are $6$ subarrays to consider:

- $[1], [3], [2], [1, 3]$ : No valid pair, $f([1]) = 0$
- $[3, 2]$ : $(i, j) = (1, 2)$ is valid inversion with $A_i + A_j = 5$, hence $f([3, 2]) = 5$.
- $[1, 3, 2]$ : $f([1, 3, 2]) = 5$.

Thus, the sum is $0 + 0 + 0 + 0 + 5 + 5 = 10$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T16:06:59.952Z  

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

[View on CodeChef](https://www.codechef.com/problems/INV1)