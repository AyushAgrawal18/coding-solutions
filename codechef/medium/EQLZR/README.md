# EQLZR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Equalizer

While exploring an abandoned cinema, Nikhil finds a maintenance room hidden behind a fallen wall.

An old display is still running inside. It shows a row of integers $A_1, A_2, \ldots, A_N$, and a note beneath it explains that the display can be adjusted  **exactly once**  before it shuts down, as follows:

- Choose two integers $L$ and $R$ ($1 \le L \le R \le N$) and increase the value of each of $A_L, A_{L+1}, \ldots, A_R$ by exactly $1$.

The display's  *score*  is the number of adjacent pairs containing equal values.
That is, the score is the number of indices $i$ such that $A_i = A_{i+1}$, where $1 \le i \lt N$.

Nikhil wants to leave the room with the highest score the display can show. Given the initial array, determine the maximum possible score after performing exactly one operation.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, the length of the array. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, print a single integer: the maximum score achievable after performing exactly one operation.

### Constraints
- $1 \le T \le 3 \cdot 10^4$
- $1 \le N \le 2 \cdot 10^5$
- $-10^9 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
4
1 1 2 2
7
1 2 3 4 5 6 7
4
3 3 3 3
6
-2 5 4 4 5 -2

```

```
3
1
3
3
```

### Explanation:

 **Test case $1$:**  Choosing $L = 1$ and $R = 2$ makes the array $[2, 2, 2, 2]$, which has a score of $3$.

 **Test case $2$:**  Choosing $L = R = 1$ makes the array $[2, 2, 3, 4, 5, 6, 7]$, which has a score of $1$. It can be verified that a score of $2$ cannot be obtained.

 **Test case $3$:**  Exactly one operation must be performed. Choosing $L = 1$ and $R = 4$ makes the array $[4, 4, 4, 4]$, which has a score of $3$.

 **Test case $4$:**  Choosing $L = 3$ and $R = 4$ makes the array $[-2, 5, 5, 5, 5, -2]$, which has a score of $3$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T14:41:12.379Z  

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
    if(n==1){
        cout<<0<<endl;
        return;
    }
    
    
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

[View on CodeChef](https://www.codechef.com/problems/EQLZR)