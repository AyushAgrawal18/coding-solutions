# TCTQU

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Ticket Queue

There are $N$ people waiting in a queue at a single ticket counter. The $i$-th person requires $T_i$ units of service time.

The counter serves the person at the front of the queue for  **exactly 1 unit of time**. If that person still requires more service, they move to the back of the queue. Otherwise, they leave the queue.

Given an index $K$ $(0 \le K < N)$, find the  **total time elapsed**  until the person who was initially at index $K$ completes their service.

### Input Format
- The first line contains two space-separated integers $N$ and $K$ — the number of people and the index of the target person.
- The second line contains $N$ space-separated integers $T_0,T_1,\ldots,T_{N-1}$ — the service time required by each person.
### Output Format
- Print a single integer — the total time elapsed until the $K$-th person completes their service.
### Constraints
- $1 \le N \le 2\times10^5$
- $0 \le K \lt N$
- $1 \le T_i \le 10^9$
### Sample 1:
Input
Output

```
4 2
1 2 3 4
```

```
8
```

### Explanation:

The person initially at index $2$ requires $3$ units of service.

They receive service at times $3$, $6$, and $8$, and complete their service at time $8$.

Therefore, the answer is  **8**.

### Sample 2:
Input
Output

```
5 0
5 1 1 1 1
```

```
9
```

### Explanation:

The target person is initially first in the queue and requires $5$ units of service.

After receiving the first unit, the other four people each complete their service before the target person continues.

The target person finally completes their service at time  **9**.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T14:06:08.278Z  

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
    ll n,t;
    cin>>n>>t;
    vll a(n);
    loop cin>>a[i];
    ll ans=0;
    loop{
        if(i<=t){
            ans+=min(a[t],a[i]);
        }
        else{
            ans+=min(a[t]-1,a[i]);
        }
    }
    cout<<ans;
    
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

[View on CodeChef](https://www.codechef.com/problems/TCTQU)