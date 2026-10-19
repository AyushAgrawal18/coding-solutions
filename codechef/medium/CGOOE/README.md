# CGOOE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Count Good Elements

You are given an array $A$ containing $N$ integers.

An element $A_i$ is  **good**  if it is strictly smaller than each of the previous five elements, or all preceding elements if fewer than five exist.

For example, $A_3$ must be smaller than both $A_1$ and $A_2$, while $A_7$ must be smaller than $A_2, A_3, A_4, A_5,$ and $A_6$.

Find the number of  **good**  elements.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- For each test case: The first line contains an integer $N$. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, print the number of days with a good price on a separate line.

### Constraints
- $1 \le T \le 100$
- $7 \le N \le 100$
- $350 \le A_i \le 750$
### Sample 1:
Input
Output

```
1
7
400 600 550 500 450 425 410
```

```
2
```

### Explanation:

The good elements are at positions $1$ and $7$.

Positions $2$ through $6$ are not good because each value is greater than $400$, which lies within its comparison range.

At position $7$, the value $410$ is smaller than the previous five values: $600,\ 550,\ 500,\ 450,\ 425$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T13:42:26.046Z  

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
    ll n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    vll temp(5,1e18);
    bool flag=true;
    temp[0]=a[0];
    ll ans=1;
    for(int i=1;i<5;i++){
        flag=true;
        for(int j=0;j<i;j++){
            if(a[i]>=temp[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            ans++;
        }
        temp[i]=a[i];
    }
    for(int i=5;i<n;i++){
        flag=true;
        for(int j=0;j<5;j++){
            if(a[i]>=temp[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            ans++;
        }
        temp[i%5]=a[i];
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

[View on CodeChef](https://www.codechef.com/problems/CGOOE)