# EXPRIZE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Prize Ladder

You are given an integer $N$.

Find the largest $K$ for which there exist integers $1 \leq a_1 < a_2 < \cdots < a_K$ such that

$a_1 + a_2 + \cdots + a_K = N \quad \text{and} \quad a_{i+1} - a_i \geq i \text{ for all } 1 \leq i < K.$

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line containing one integer $N$.
### Output Format

For each test case, output on a new line the largest $K$.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 10^{18}$
### Sample 1:
Input
Output

```
5
14
1
6
7
1000000000000000000

```

```
4
1
2
3
1817120
```

### Explanation:

Test case $1$: $14 = 1 + 2 + 4 + 7$ uses $K = 4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:42:02.430Z  

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

bool check(ll mid, ll n){
    ll k=mid+(mid-1)*(mid)*(mid+1)/6;
    return k<=n;
}



inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    ll l=1,h=2000000;
    while(l<h){
        ll mid=l+(h-l+1)/2;
        if (check(mid,n))l=mid;
        else h=mid-1;
    }
    cout<<l<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/EXPRIZE)