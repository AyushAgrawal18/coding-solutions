# MONOORBEZ

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Orbital Monotonicity (Easy)

 *This is the easy version of the problem. The only difference between versions is that here, the input array satisfies $A_i = M$ for all $i$.* 

Nikhil is exploring an abandoned subway station, and on the wall he finds an old departure board that still works. The board only comes back to life if it is set up the right way, and Nikhil wants to know how many ways there are to do that.

The board has $N$ panels in a row, and each panel shows a number from $1$ to $M$.
Let $X_i$ denote the number displayed on the $i$-th panel, and $X = [X_1, \ldots, X_N]$.

Behind the board is a wiring $P$, which is a permutation of $1, 2, \ldots, M$.
Using the wiring, Nikhil can flip the board. When this happens, every panel showing $c$ changes to show $P_c$, all at once.

Let us denote the state of the board after one flip as $P(X)$, where $P(X) = [P_{X_1}, P_{X_2}, \ldots, P_{X_N}]$, and the state of the board after $k$ flips (for integer $k \ge 1$) as $P^k(X)$, where:

- $P^1(X) = P(X)$
- $P^k(X) = P(P^{k-1}(X))$ for $m \gt 1$

You are given an array $A$ of length $N$, as well as integers $K$ and $D$.
 **In this version of the problem, $A_i = M$ for each $1 \le i \le N$.** 

Count the number of pairs $(X, P)$ that satisfy all four conditions:

- $X$ is an array of length $N$ with $1 \le X_i \le M$ for every $i$.
- $X$ is not lexicographically larger than $A$.
- The graph on $M$ vertices with edges $(i, P_i)$ consists of exactly $K$ connected components.
- Each of the first $D$ flips makes the board strictly bigger: $X \lt P(X) \lt P^2(X) \lt \cdots \lt P^D(X)$.

All comparisons between arrays are lexicographic.
For two arrays $U$ and $V$ of length $N$, $U \lt V$ means there is an index $i$ such that $U_j = V_j$ for all $j \lt i$ and $U_i \lt V_i$.

Two pairs $(X, P)$ and $(X', P')$ are different if $X \neq X'$ or $P \neq P'$.

Since the answer can be very large, print it modulo $998244353$.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains four integers $N$, $M$, $K$ and $D$. The second line contains $N$ integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, print a single integer: the number of valid pairs $(X, P)$, modulo $998244353$.

### Constraints
- $1 \le T \le 10^5$
- $1 \le N, M \le 5000$
- $1 \le K \le M$
- $1 \le D \le M$
- $\red{A_i = M}$ for every $i$
- The sum of $N^2$ over all test cases does not exceed $5000^2$.
- The sum of $M^2$ over all test cases does not exceed $5000^2$.
### Sample 1:
Input
Output

```
7
2 2 1 1
2 2
3 3 2 1
3 3 3
2 4 1 2
4 4
3 4 3 2
4 4 4
4 4 2 2
4 4 4 4
3 5 2 2
5 5 5
10 6 3 2
6 6 6 6 6 6 6 6 6 6
```

```
2
39
16
0
340
870
634327027
```

### Explanation:

 **Test case $1$:**  The only permutation $P$ of $[1, 2]$ with exactly one connected component is $P = [2, 1]$.

All four arrays $X$ of length $2$ with entries in $[1, 2]$ are allowed. Among these, $[1, 1] \lt P([1, 1]) = [2, 2]$ and $[1, 2] \lt P([1, 2]) = [2, 1]$ hold, while $[2, 1] \lt P([2, 1]) = [1, 2]$ and $[2, 2] \lt P([2, 2]) = [1, 1]$ do not.

So the valid pairs are $([1, 1], [2, 1])$ and $([1, 2], [2, 1])$.

 **Test case $4$:**  It can be verified that no valid pair $(X, P)$ exists.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T15:13:47.050Z  

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

[View on CodeChef](https://www.codechef.com/problems/MONOORBEZ)