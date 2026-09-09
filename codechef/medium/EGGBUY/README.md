# EGGBUY

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Buying Eggs

You want to buy $12$ eggs.

There are two shops that sell eggs.

- The first shop is nearby, and sells eggs at a cost of $X$ coins each.
- The second shop is far away, and sells eggs at a cost of $Y$ coins each. However, since the second shop is far away, you also need to pay an additional $F$ coins in fuel costs to reach it.

Find the minimum possible cost of buying $12$ eggs.

### Input Format
- The first and only line of input will contain three space-separated integers $X, Y,$ and $F$ — the costs of eggs in the first and second shops, and the fuel cost.
### Output Format

Output a single integer: the minimum cost of buying $12$ eggs.

### Constraints
- $1 \le X, Y, F \le 20$
### Sample 1:
Input
Output

```
5 8 3

```

```
60
```

### Explanation:

Buying $12$ eggs from the first shop has a cost of $5\cdot 12 = 60$ coins.
Buying $12$ eggs from the second shop has a cost of $8\cdot 12 = 96$ coins, with an additional $F=3$ in fuel costs for a total of $99$.

It's better to buy from the first shop, spending $60$ coins.

### Sample 2:
Input
Output

```
10 4 5

```

```
53
```

### Explanation:

Buying $12$ eggs from the first shop has a cost of $10\cdot 12 = 120$ coins.
Buying $12$ eggs from the second shop has a cost of $4\cdot 12 = 48$ coins, with an additional $F=5$ in fuel costs for a total of $53$.

It's better to buy from the second shop, spending $53$ coins.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T15:48:08.997Z  

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
    ll x,y,f;
    cin>>x>>y>>f;
    cout<<min((12LL*x),((12LL*y)+f));
    
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

[View on CodeChef](https://www.codechef.com/problems/EGGBUY)