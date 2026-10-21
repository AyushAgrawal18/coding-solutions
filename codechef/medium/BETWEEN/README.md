# BETWEEN

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exun Leaderboard

The Exun quiz leaderboard has no ties. Your team is ranked $X$-th in the leaderboard, and your rival team is ranked $Y$-th.

Find how many teams are ranked strictly between you and your rival.

### Input Format
- The first and only line of input contains $2$ integers - $X$ and $Y$.
### Output Format

Output the number of teams that are ranked strictly between you and your rival.

### Constraints
- $1 \le X, Y \le 10$
- $X \ne Y$
### Sample 1:
Input
Output

```
1 5

```

```
3

```

### Explanation:

Your team is ranked $1$, and your rival's team is ranked $5$. There are $3$ teams ($2$nd, $3$rd and $4$th) between you.

### Sample 2:
Input
Copy to clipboard
Output

```
2 1

```

```
0

```

### Explanation:

Your rival team is $1$st, and you are $2$nd, no teams between you.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T16:02:23.996Z  

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
    ll x,y;
    cout<<abs(x-y)-1<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/BETWEEN)