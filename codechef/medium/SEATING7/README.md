# SEATING7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Seating

There are $N$ seats numbered $1$, $2$, $\ldots$, $N$, and $M$ of them are already occupied - seats numbered $A_1, A_2, \ldots, A_M$.

$K$ more people will enter one by one, and each of them will occupy the lowest numbered seat that is available. For each of these $K$ people, find the seat number where they will seat.

It is guaranteed that there are at least $K$ seats empty.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $3$ integers - $N$, $M$ and $K$. The second line contains $M$ integers - $A_1, A_2, \ldots, A_M$.
### Output Format

For each test case, output on a new line $K$ integers - the seat numbers where each of the new people will sit, in order.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le M, K \le N$
- $M + K \le N$
- $1 \le A_i \le N$
- $A_i \lt A_{i + 1}$
### Sample 1:
Input
Output

```
3
4 2 2
1 3
6 2 3
3 4
5 1 1
5

```

```
2 4
1 2 5
1
```

### Explanation:

 **Test Case 1:**  Person $1$ comes and notices seat $1$ is already taken, and so sits in seat numbered $2$. Person $2$ comes and notices seats $1$, $2$ and $3$ are taken, and hence sits in $4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T14:38:57.721Z  

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
    ll n,m,k;
    cin>>n>>m>>k;
    vll a(n+1);
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<=n && k>0;i++){
        if(a[i]==0){
            cout<<i<<" ";
            k--;
        }
    }
    cout<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/SEATING7)