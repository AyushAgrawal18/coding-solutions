# MATNEARESTO

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Distance to Nearest 0

Given is a `N x M` binary matrix, for each cell find its distance from the nearest `0`.

 **Note:**  Distance between vertically or horizontally adjacent cells is `1`. (See the sample input/output for more clarity)

### Input Format
- The first line of input will contain two space separated integers $N$ and $M$, denoting the no. of rows and columns in the matrix.
- Next $N$ lines containing $M$ space separated integers, the elements of the matrix.
### Output Format
- Output $N$ lines containing $M$ space separated integers, the distance of each cell from nearest 0.
### Constraints
- $1 \leq N, M \leq 100$
- The elements of the matrix are either 0 or 1.
- There is at least one 0 in the matrix.
### Sample 1:
Input
Output

```
3 3
0 1 1
0 1 0
1 1 1
```

```
0 1 1
0 1 0
1 2 1
```

### Explanation:

Positions are written as $(row, column)$, starting from $1$.

- Cells $(1,1)$, $(2,1)$, and $(2,3)$ contain $0$, so their distance is $0$.
- Cells $(1,2)$, $(1,3)$, $(2,2)$, $(3,1)$, and $(3,3)$ are horizontally or vertically adjacent to a cell containing $0$, so their distance is $1$.
- Cell $(3,2)$ requires at least $2$ moves to reach a $0$. For example, move left to $(3,1)$, then up to $(2,1)$. Its distance is therefore $2$.

Only horizontal and vertical moves are allowed; diagonal moves are not allowed.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T14:36:45.668Z  

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
    vector<vi> a(n, vi(m));
    vector<vi> ans(n, vi(m,-1));
    queue<pii>q;
    rep(i,0,n) {
        rep(j,0,m) {
            cin>>a[i][j];
            if (a[i][j]==0){
                ans[i][j]=0;
                q.push({i,j});
            }
        }
    }
    vi dx = {-1,1,0,0};
    vi dy = {0,0,-1,1};
    while (!q.empty()) {
        pii cur=q.front();
        q.pop();
        ll x=cur.first;
        ll y=cur.second;

        rep(k,0,4) {
            ll nx = x+dx[k];
            ll ny = y+dy[k];
            if (nx>=0 && nx<n && ny>=0 && ny<m && ans[nx][ny]==-1) {
                ans[nx][ny]=ans[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    rep(i,0,n){
        rep(j,0,m){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
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

[View on CodeChef](https://www.codechef.com/problems/MATNEARESTO)