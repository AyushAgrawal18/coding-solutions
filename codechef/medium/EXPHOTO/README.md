# EXPHOTO

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exun Photo

You are given a permutation $P$ of the integers $[1, N]$, and an integer $K$.

You can perform the following operation as many times as you want (possibly $0$):

- Choose $(L, R)$ such that $(R - L + 1) \le K$ and $1 \le L \le R \le N$.
- Let $t$ denote the index of the maximum element in $P_i$ for $L \le i \le R$.
- The element $P_t$ is removed, and reinserted just before $P_L$.
- Thus, the segment $P[L, R]$ becomes $P_t P_{L} \ldots P_{t - 1} P_{t + 1} \ldots P_R$.

Find the minimum number of operations needed to make permutation $P = (N, N - 1, \ldots, 1)$, i.e. sorted descending order.

If it is not possible, output $-1$ instead.

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $K$. The second line contains $N$ space-separated integers $P_1, P_2, \ldots, P_N$.
### Output Format

For each test case, output on a new line the minimum number of operations or $-1$ if not possible.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2 \cdot 10^5$
- $1 \leq K \leq 2 \cdot 10^5$
- $P$ is a permutation of $1, 2, \ldots, N$.
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
5 3
3 1 2 5 4
4 4
4 3 2 1
3 2
1 2 3

```

```
5
0
3
```

### Explanation:

Test case $1$: One optimal sequence of operations, each written as $[l, r]$:

$[2, 4]$: $(3, 1, 2, 5, 4) \to (3, 5, 1, 2, 4)$ $[1, 2]$: $(3, 5, 1, 2, 4) \to (5, 3, 1, 2, 4)$ $[3, 5]$: $(5, 3, 1, 2, 4) \to (5, 3, 4, 1, 2)$ $[2, 3]$: $(5, 3, 4, 1, 2) \to (5, 4, 3, 1, 2)$ $[4, 5]$: $(5, 4, 3, 1, 2) \to (5, 4, 3, 2, 1)$

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:56:51.198Z  

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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    loop cin>>a[i];
    if(k==1){
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                flag=false;
                break;
            }
        }
        if(flag) cout<<0<<endl;
        else cout<<-1<<endl;
        return;
    }
    ll ans=0;
    ll dis=k-1;
    vll b(n+1,0);
    loop{
        ll v=a[i];
        ll y=0;
        for(int x=v;x>0;x-=(x&-x)) y+=b[x];
        ans+=(y+dis-1)/dis;
        for(int x=v;x<=n;x+=(x&-x)) b[x]++;
    }
    cout<<ans<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/EXPHOTO)