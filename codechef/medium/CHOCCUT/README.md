# CHOCCUT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chocolate Cutting

Chef has a chocolate bar which is a rectangle-shaped of size $N \times M$ chocolate pieces.

He wants to divide this chocolate into $2$ equal pieces with a cut along a grid line. The cut needs to be parallel to the sides of the chocolate, and it cannot go through the middle of any chocolate piece.

Print $\text{Yes}$ if it is possible to divide the chocolate into $2$ equal pieces following these rules, and $\text{No}$ otherwise.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first and only line contains $2$ integers - $N$ and $M$.
### Output Format

For each test case, output on a new line $\text{Yes}$ if it is possible to divide the chocolate bar into $2$ equal pieces and $\text{No}$ otherwise.

### Constraints
- $1 \le T \le 100$
- $1 \le N, M \le 10$
### Sample 1:
Input
Output

```
4
1 1
1 2
3 4
3 5

```

```
No
Yes
Yes
No

```

### Explanation:

 **Test Case 1:**  There is only $1$ chocolate piece, so it would be impossible anyways to split into $2$.

 **Test Case 2:**  You can do one vertical cut to get $2$ $1 \times 1$ pieces.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T16:09:29.375Z  

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
#define yes() cout << "Yes\n"
#define no() cout << "No\n"

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);



inline void solve() {
    // Your solution goes here
    ll n,m;
    cin>>n>>m;
    if(!(n&1)||!(m&1)) yes();
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

[View on CodeChef](https://www.codechef.com/problems/CHOCCUT)