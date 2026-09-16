# TRANSFER

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Transfer

You are given an array $A$ of $N$ integers. While you can, you will do the following action:

- pick some index $i$ ($1 \le i < N$) such that $A_i > A_{i + 1}$
- Transfer $1$ from $A_i$ to $A_{i + 1}$, i.e. do the following updates: $A_i \leftarrow A_i - 1$ $A_{i + 1} \leftarrow A_{i + 1} + 1$

Find the maximum number of the above actions you can perform.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum actions you can perform.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
4
3
2 1 1
2
1 3
4
5 3 2 4
6
7 4 1 9 1 5

```

```
2
0
4
10
```

### Explanation:

 **Test Case 1:**  You can first perform the action with $i = 1$ to get $[1, 2, 1]$, and then $i = 2$ to get $[1, 1, 2]$. No further actions are possible.

 **Test Case 2:**  There is no valid index for the action in the initial array itself, so the answer is $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T15:37:40.213Z  

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
    ll ans=0;
    for(int i=n-1;i>0;i--){
        if(a[i]<a[i-1]){
            ll op = (a[i-1]-a[i]+1)/2;
            ans+=op;
            a[i]+=op;
            a[i-1]-=op;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ll op = (a[i]-a[i+1]+1)/2;
            ans+=op;
            a[i]-=op;
            a[i+1]+=op;
        }
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

[View on CodeChef](https://www.codechef.com/problems/TRANSFER)