# BSSEA

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Best Seat

You are given an array $A$ of $N$ distinct integers, where $A_i$ represents the number of the $i$-th available seat in a cinema hall.

The  **center position**  is defined as the average of the smallest and largest values in $A$. This position may not be an integer and may not correspond to an available seat.

Find the  **available seat closest to the center position**. If two seats are equally close, choose the one with the  **smaller seat number**.

### Input Format
- The first line contains an integer $N$, the number of available seats.
- The second line contains $N$ distinct integers $A_1,A_2,\ldots,A_N$, in any order.
### Output Format

Print a single integer — the chosen seat number.

### Constraints
- $1 \le N \le 1000$
- $1 \le A_i \le 10^9$
- All seat numbers are distinct.
### Sample 1:
Input
Output

```
5
10 20 30 40 50
```

```
30
```

### Explanation:

The smallest and largest seat numbers are $10$ and $50$, so the center position is $(10+50)/2=30$.

Seat $30$ is available and lies exactly at the center.

### Sample 2:
Input
Output

```
6
1 2 3 7 8 9
```

```
3
```

### Explanation:

The center position is $(1+9)/2=5$.

Seats $3$ and $7$ are both $2$ units away from the center. Choose seat $3$ because its number is smaller.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T13:44:28.926Z  

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
    sort(all(a));
    ll x=a[0]+(a[n-1]-a[0])/2;
    ll ans=lower_bound(a.begin(), a.end(), x)-a.begin();
    cout<<a[ans];
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

[View on CodeChef](https://www.codechef.com/problems/BSSEA)