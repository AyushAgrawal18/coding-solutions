# BLUEBLACK

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Blue and Black Pens

Chef is particular about the colour of the pens he uses to write in any exam.

He needs either:

- $3$ blue pens, or
- $1$ blue pen and $1$ black pen.

One blue pen costs $A$ rupees, and one black pen costs $B$ rupees. Find the minimum cost Chef has to pay.

### Input Format
- The first and only line contains $2$ integers - $A$ and $B$.
### Output Format

Output the minimum cost Chef has to pay to buy pens satisfying his requirement.

### Constraints
- $10 \le A, B \le 50$
### Sample 1:
Input
Output

```
10 10

```

```
20
```

### Explanation:

Chef can buy one blue and one black pen for a cost of $20$.

### Sample 2:
Input
Output

```
10 50

```

```
30

```

### Explanation:

Chef can buy $3$ blue pens for a cost of $30$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T16:17:15.161Z  

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
    ll a,b;
    cin>>a>>b;
    cout<<min(3*a,a+b)<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/BLUEBLACK)