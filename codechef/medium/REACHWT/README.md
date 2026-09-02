# REACHWT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reach Weight

You need to buy some weights that total to exactly $N$ kg.

You can buy either $1$ kg weights for $20$ rupees, or $2$ kg weights for $30$ rupees.

Find the minimum cost to buy such a set of weights that sum to $N$ kg.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line contains a single integer $N$.
### Output Format

For each test case, output on a new line the minimum total cost of buying a set of weights that total to exactly $N$ kg.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
### Sample 1:
Input
Output

```
3
1
2
3

```

```
20
30
50

```

### Explanation:

 **Test Case 1:**  You buy $1$ one-kg weight for a cost of $20$.

 **Test Case 2:**  You buy $1$ two-kg weight for a cost of $30$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T16:16:39.973Z  

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
    int n;
    cin>>n;
    cout<<(n/2)*30+(n%2)*20<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/REACHWT)