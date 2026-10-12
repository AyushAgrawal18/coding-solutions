# HUNDW

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Houses Under Watch

A street has $100$ houses, numbered $1$ through $100$ from left to right. Cops are stationed at $M$ distinct houses, given by $A_1,A_2,\ldots,A_M$.

Each cop can travel up to $X$ house positions per minute and has $Y$ minutes to search. Therefore, a house numbered $H$ is  **within reach**  of a cop at house $A_i$ if $|H-A_i|\le X\times Y$. The cop's own house is also within reach.

Devu wants to hide in a house that is  **outside the reach of every cop**. Find the number of such houses.

### Input Format

The first line contains an integer $T$ — the number of test cases.

- For each test case: The first line contains three space-separated integers $M$, $X$, and $Y$. The second line contains $M$ space-separated integers $A_1,A_2,\ldots,A_M$ — the houses where cops are stationed.
### Output Format

For each test case, print the number of safe houses on a separate line.

### Constraints
- $1 \le T \le 10^4$
- $1 \le M,X,Y \le 10$
- $1 \le A_i \le 100$
- All $A_i$ are distinct.
### Sample 1:
Input
Output

```
2
2 2 5
20 35
1 3 4
5
```

```
64
83
```

### Explanation:

 **Test case 1:**  Each cop can travel up to $10$ house positions. The cops can reach houses $10$ through $30$ and $25$ through $45$, respectively. Together, these ranges cover $36$ houses, so $100-36=64$ houses are safe.

 **Test case 2:**  The cop can travel up to $12$ house positions. Within the street, houses $1$ through $17$ are within reach. The remaining $100-17=83$ houses are safe.

### Sample 2:
Input
Output

```
1
1 10 5
50
```

```
0
```

### Explanation:

 **Test case 1:**  The cop can travel up to $50$ house positions from house $50$, placing every house from $1$ through $100$ within reach. No house is safe.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T13:41:26.776Z  

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
    ll n,x,y;
    cin>>n>>x>>y;
    vll a(n);
    loop cin>>a[i];
    vector<bool> flag(101, true);
    for(int i=0;i<n;i++){
        ll l=max(1LL,a[i]-(x*y));
        ll r=min(100LL, a[i]+(x*y));
        for(int j=l;j<=r;j++){
            flag[j]=false;
        }
    }
    ll cnt=0;
    for(int i=1;i<101;i++){
        if(!flag[i]){
            cnt++;
        }
    }
    cout<<100-cnt<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/HUNDW)