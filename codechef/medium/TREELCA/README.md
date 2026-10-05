# TREELCA

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### LCA of two nodes

Given an undirected connected tree with  **N**  nodes, numbered from  **1**  to  **N**, rooted at node  **1**, and two nodes $u$ and $v$, find the lowest common ancestor (LCA) of it. (**Note:**  The lowest common ancestor of two nodes $u$ and $v$ is the lowest node that has both $u$ and $v$ as its descendants)

For example, in the following tree, the LCA of nodes $3$ and $7$ is node $1$. Also the LCA of nodes $4$ and $7$ is $4$.

### Input Format
- The first line of the input contains three space separated integers $N$, $u$ and $v$ — the number of nodes, and two given nodes.
- The next $N - 1$ lines describe the edges. The $i$-th of these $N - 1$ lines contains two space-separated integers $u_i$ and $v_i$, denoting a bidirectional edge between $u_i$ and $v_i$.
### Output Format
- Output on the single line, the LCA of nodes $u$ and $v$.
### Constraints
- $1 \leq N \leq 100000$
- $1 \leq u_i, v_i \leq N$
- $1 \leq u, v \leq N$
### Sample 1:
Input
Output

```
7 3 7
1 2
1 4
2 5
2 3
2 6
4 7
```

```
1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:07:53.201Z  

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

vector<vll> up;
vll depth;
vll parent;
vector<vll> adj;


int lca(ll x, ll y){
    if(depth[x]<depth[y]) swap(x,y);
    ll diff=abs(depth[x]-depth[y]);
    for(int i=0;i<30;i++){
        if((1<<i)&diff) x=up[x][i];
    }
    for(int i=29;i>=0;i--){
        if(up[x][i]==up[y][i]) continue;
        x=up[x][i],y=up[y][i];
    }
    return up[x][0];
}

void dfs(int root, int parents,vector<vll> &adj,vll &depth, vll &parent){
    for(auto child: adj[root]){
        if(child==parents) continue;
        depth[child]=depth[root]+1;
        parent[child]=root;
        dfs(child, root, adj, depth,parent);
    }
}



inline void solve() {
    // Your solution goes here
    
    ll n;
    cin>>n;
    up.resize(n+1,vll (30));
    depth.resize(n+1);
    parent.resize(n+1);
    ll x,y;
    cin>>x>>y;
    adj.resize(n+1);
    for(int i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1,0,adj,depth, parent);
    
    for(int i=1;i<=n;i++){
        up[i][0]=parent[i];
    }
    for(int j=1;j<30;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
    cout<<lca(x,y)<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/TREELCA)