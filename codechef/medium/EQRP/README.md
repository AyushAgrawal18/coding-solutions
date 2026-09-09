# EQRP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Equal Replacement

You are given an array $A$ of length $2N$.

You can perform the following operation:

- Choose a subarray $[L, L+N-1]$ of length $N$ (where $1 \le L \le N+1$), such that the MEX$^\dagger$ of the elements inside the subarray is equal to the MEX of all the elements outside this subarray, i.e.
$$ \operatorname{MEX}(A_L, A_{L+1}, \ldots, A_{L+N-1}) = \operatorname{MEX}(A_1, A_2, \ldots, A_{L-1}, A_{R+1}, \ldots, A_{2N}]) $$

Let this common MEX be $M$.

- Choose any one element inside the subarray and replace it by $M$.
- Also choose any one element outside the subarray and replace it by $M$.

Determine whether it is possible to perform operations indefinitely.
If it is not possible, find the maximum number of operations that can be performed.

$^\dagger$The MEX of a sequence of integers is the smallest non-negative integer that does not occur in it. For example, $\operatorname{MEX}(0, 1, 0) = 2, \operatorname{MEX}(2, 1, 4) = 0$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the length of the array. The second line of each test case contains $N$ space-separated integers $A_1, \ldots, A_N$.
### Output Format

For each test case, output on a new line:

- $-1$, if it is possible to perform operations indefinitely.
- Otherwise, the maximum finite number of operations that can be performed.
### Constraints
- $1 \le T \le 10^5$
- $1 \le N \le 2 \cdot 10^5$
- $0 \le A_i \lt 2N$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
1
0 0
1
0 1
4
3 6 5 2 2 1 1 1

```

```
-1
0
1

```

### Explanation:

 **Test case $1$:**  We have $A = [0, 0]$.
It is possible to perform operations infinitely, because:

- On the first operation, we must choose $[0]$ as one subarray; leaving a single $0$ outside. Both parts have MEX $1$. So, we must replace one element inside and one element outside by $1$. We are hence forced to replace both elements, turning the array into $[1, 1]$.
- On the second operation, we must now choose $[1]$ as one subarray; leaving a single $1$ outside. Both parts have MEX $0$. Again, we're forced to replace both elements, ending back up at $[0, 0]$.
- Simply repeat this over and over again.

 **Test case $2$:**  No operation can be performed at all.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T15:43:41.399Z  

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

[View on CodeChef](https://www.codechef.com/problems/EQRP)