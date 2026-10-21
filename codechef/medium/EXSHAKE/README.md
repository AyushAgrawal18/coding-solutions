# EXSHAKE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exun Handshake

$N$ groups of participants are trying to reach the annual Exun symposium. Group $i$ has $A_i$ people.

By tradition, everyone at the symposium shakes hands with everyone else exactly once as a sign of sportsmanship, whether they are from the same group or not. So if $P$ people attend in total, there are $\frac{P(P-1)}{2}$ handshakes.

The ceremony takes a long time, and the organisers only have time for $M$ handshakes. They will invite some of the groups (a group comes in full or not at all) so that the total number of handshakes is at most $M$.

Find the maximum number of groups that can be invited.

Inviting no groups at all is allowed, and gives $0$ handshakes.

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $M$. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum number of groups that can be invited.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
- $0 \leq M \leq 10^8$
- $1 \leq A_i \leq 100$
### Sample 1:
Input
Output

```
4
4 10
3 1 4 2
3 0
2 5 3
5 45
2 2 2 2 2
3 0
4 1 1

```

```
2
0
5
1
```

### Explanation:

Test case $1$: Inviting the groups with $1$ and $2$ people gives $3$ people and $\frac{3 \cdot 2}{2} = 3$ handshakes. Any $3$ groups bring at least $1 + 2 + 3 = 6$ people, which means at least $15 > 10$ handshakes.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T14:34:52.877Z  

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
    ll n,m;
    cin>>n>>m;
    vll a(n);
    loop cin>>a[i];
    sort(all(a));
    ll sum=0,ans=0;;
    loop{
        sum+=a[i];
        ll temp=sum*(sum-1)/2;
        if(temp>m) break;
        ans++;
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

[View on CodeChef](https://www.codechef.com/problems/EXSHAKE)