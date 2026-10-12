# FRGMSG

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Frog Messages

Chef's garden has $N$ frogs, numbered $1$ through $N$. Frog $i$ sits at position $A_i$ on the number line. Multiple frogs may occupy the same position.

Two frogs can communicate  **directly**  if the distance between them is at most $K$. Frogs can also  **relay messages through other frogs**, provided each consecutive pair in the relay can communicate directly. The frogs do not move.

You are given $P$ queries. For each query $(u,v)$, determine whether frog $u$ can send a message to frog $v$, either directly or through a relay.

### Input Format
- The first line contains three space-separated integers $N$, $K$, and $P$.
- The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$.
- Each of the next $P$ lines contains two integers $u$ and $v$ — the frog numbers for a query.

Frog numbers refer to their order in the input, regardless of their positions.

### Output Format

For each query, print `Yes` if the message can be delivered, otherwise print `No`, on a separate line.

### Constraints
- $1 \le N,P \le 10^5$
- $0 \le A_i,K \le 10^9$
- $1 \le u,v \le N$
### Sample 1:
Input
Output

```
6 3 4
10 1 7 4 15 18
2 1
3 4
1 5
5 6
```

```
Yes
Yes
No
Yes
```

### Explanation:
- Query $(2,1)$: The message can follow frogs $2 \rightarrow 4 \rightarrow 3 \rightarrow 1$, at positions $1 \rightarrow 4 \rightarrow 7 \rightarrow 10$. Each step has distance $3$.
- Query $(3,4)$: Their positions are $7$ and $4$, so they can communicate directly.
- Query $(1,5)$: The gap between positions $10$ and $15$ is $5>K$, and no frog lies between them to relay the message. Communication is impossible.
- Query $(5,6)$: Their positions are $15$ and $18$, so they can communicate directly.
### Sample 2:
Input
Output

```
4 0 3
5 9 5 12
1 3
1 2
4 4
```

```
Yes
No
Yes
```

### Explanation:
- Query $(1,3)$: Both frogs occupy position $5$. Their distance is $0$, so they can communicate.
- Query $(1,2)$: With $K=0$, messages cannot travel between different positions.
- Query $(4,4)$: A frog can communicate with itself without any relay.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T14:05:23.980Z  

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
    ll n,k,p;
    cin>>n>>k>>p;
    vll a(n);
    
    
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

[View on CodeChef](https://www.codechef.com/problems/FRGMSG)