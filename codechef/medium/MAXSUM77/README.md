# MAXSUM77

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Maximum Sum

You have an array $A$ of $N$ elements. You will remove either the first or the last element of the array $K$ times (each time, you can choose whether to remove first or last independently).

After all $K$ operations, find the maximum possible sum of the remaining elements of the array.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $2$ integers - $N$ and $K$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum possible sum remaining after $K$ operations.

### Constraints
- $1 \le T \le 100$
- $1 \le K \lt N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
4 2
2 6 3 4
3 2
5 1 2
4 2
8 1 6 5

```

```
9
5
11
```

### Explanation:

 **Test Case 1:**  You can delete the first element in the first operation, and the last element in the second operation; leaving you with $[6, 3]$ which has a sum of $9$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:20:56.978Z  

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


int res(int i, int j, int q, vll &x, vll &y,  vector<vector<vector<ll>>> &dp){
    int k=x.size();
    if(i==k) return 0;
    if(j<0) return 0;
    if(q==0) return 0;
    if(dp[i][j][q] != -1)
        return dp[i][j][q];
    
    int take_x = x[i]+res(i+1, j, q-1,  x, y, dp);
    int take_y = y[j]+res(i, j-1, q-1, x, y, dp);
    
    return dp[i][j][q]= min(take_x, take_y);
}



inline void solve() {
    // Your solution goes here
    ll n,k;
    cin>>n>>k;
    vll a(n);
    ll sum=0;
    loop {
        cin>>a[i];
        sum+=a[i];
    }
    vll x;
    vll y;
    for(int i=0;i<k;i++){
        x.push_back(a[i]);
    }
    for(int i=n-k;i<n;i++){
        y.push_back(a[i]);
    }
    vector<vector<vector<ll>>> dp(k, vector<vector<ll>>(k,vector<ll>(k+1,-1)));
    ll mini=res(0, k-1, k, x, y, dp);
    cout<<sum-mini<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/MAXSUM77)