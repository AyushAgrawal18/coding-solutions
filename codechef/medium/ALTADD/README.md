# ALTADD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Alternate Adding

You are given an array $A$ of $N$ elements. In one operation, you do the following:

- Choose $(L, R)$ such that $1 \le L \le R \le N$
- Add either $[1, -1, 1, -1, \ldots, ]$ or $[-1, 1, -1, 1, \ldots, ]$ to the elements of the subarray $[A_L, A_{L + 1}, \ldots, A_R]$, i.e. either add $1$ to all odd-indexed elements and $-1$ to all even-indexed elements; or vice versa.

For example, for $A = [1, 2, 3, 4]$, we can choose $(L, R) = (2, 4)$, we can get the arrays $[1, 3, 2, 5]$ or $[1, 1, 4, 3]$ in one operation.

You want to make all elements of array $A$ equal to $0$. Find the minimum number of operations needed.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum number of operations needed to make the array $A$ all zeroes.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $-10^9 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
3
2
1 -1
3
2 2 2
6
1 -5 4 3 -6 2

```

```
1
6
11
```

### Explanation:

 **Test Case 1:**  Choose $(L, R) = (1, 2)$ and add $[-1, +1]$ to make the array all $0$ in $1$ move.

 **Test Case 2:**  Do the following operations:

- Choose $(L, R) = (1, 1)$ and add $[-1]$.
- Repeat the previous one more time.
- Choose $(L, R) = (2, 2)$ and add $[-1]$.
- Repeat the previous one more time.
- Choose $(L, R) = (3, 3)$ and add $[-1]$.
- Repeat the previous one more time.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:31:10.465Z  

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
    int n;
    cin >> n;
    vll a(n);
    loop{
        ll x;
        cin>>x;
        if (i%2==0)
            a[i]=x;
        else
            a[i]=-x;
    }
    ll ans=abs(a[0]);
    for (int i=1;i<n;i++) {
        ans+=abs(a[i]-a[i-1]);
    }
    ans+=abs(a[n-1]);
    cout<<ans/2<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/ALTADD)