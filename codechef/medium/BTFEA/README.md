# BTFEA

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Birthday Feast

Tushar is hosting a party for $N$ friends. The $i$-th friend needs exactly $A_i$ units of food to be satisfied.

There are $M$ types of dishes available. The $j$-th dish provides $B_j$ units of filling and costs $C_j$.

Each friend may order any dish type any number of times, but a single serving cannot be shared between friends. A friend is considered satisfied only when the total filling provided by the dishes they eat is  **exactly equal**  to their eating capacity.

Find the  **minimum total cost**  required to satisfy all friends.

It is guaranteed that at least one dish has filling capacity $1$, so a valid solution always exists.

### Input Format
- The first line contains two space-separated integers $N$ and $M$ — the number of friends and the number of dish types.
- The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$ — the eating capacities of the friends.
- The third line contains $M$ space-separated integers $B_1,B_2,\ldots,B_M$ — the filling capacities of the dishes.
- The fourth line contains $M$ space-separated integers $C_1,C_2,\ldots,C_M$ — the cost of each dish.
### Output Format
- Print a single integer — the minimum total cost required to satisfy all friends.
### Constraints
- $1 \le N \le 1000$
- $1 \le M \le 1000$
- $1 \le A_i \le 1000$
- $1 \le B_i \le 1000$
- $1 \le C_i \le 10^4$
- At least one dish has filling capacity $1$
### Sample 1:
Input
Output

```
2 2
4 6
1 3
5 3
```

```
14
```

### Explanation:

For the first friend with capacity $4$, choose one dish of filling capacity $1$ and one dish of filling capacity $3$. The cost is $5+3=8$.

For the second friend with capacity $6$, choose the dish of filling capacity $3$ twice. The cost is $3+3=6$.

Therefore, the minimum total cost is:

$8+6=14$

### Sample 2:
Input
Output

```
3 3
2 5 7
1 3 4
3 4 5
```

```
23
```

### Explanation:

For the friend with capacity $2$, choose the dish of filling capacity $1$ twice. The cost is $3+3=6$.

For the friend with capacity $5$, choose dishes of filling capacities $4$ and $1$. The cost is $5+3=8$.

For the friend with capacity $7$, choose dishes of filling capacities $3$ and $4$. The cost is $4+5=9$.

Therefore, the minimum total cost is:

$6+8+9=23$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:42:26.693Z  

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


ll res(int i, ll need, vll &b, vll &c,vector<vll> &dp){
    if(i<0){
        if(need>0) return 1e18;
        else return 0;
    }
    if(dp[i][need]!=-1) return dp[i][need];
    
    
    ll take=INF;
    if(need>=b[i]){
        take=c[i]+res(i,need-b[i],b,c, dp);
    }
    ll not_take=res(i-1, need, b, c, dp);
    
    return dp[i][need]=min(take,not_take);
}



inline void solve() {
    // Your solution goes here
    ll n,m;
    cin>>n>>m;
    vll a(n),b(m),c(m);
    loop cin>>a[i];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    ll ans=0;
    ll maxi=*max_element(a.begin(), a.end());
    vector<vll> dp(n+1, vll (maxi+1, -1));
    for(int i=0;i<n;i++){
        ll need=a[i];
        ll temp=res(m-1,need,b,c, dp);
        if(temp!=1e18) ans+=temp;
    }
    cout<<ans<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/BTFEA)