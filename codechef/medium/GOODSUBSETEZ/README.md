# GOODSUBSETEZ

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Good Subset (Easy)

A set $S$ is said to be good if the following condition holds:

- for all $x, y \in S$, $x \oplus y < x$ $\&$ $y$, where $\oplus$ represents the bitwise XOR operator, and $\&$ represents the Bitwise AND operator.

Define $f(S)$ as the size of the largest good subset of $S$.

You are given a set $S$ of $N$ elements. Find $f(S)$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $S_1, S_2, \ldots, S_N$, the elements of the set.
### Output Format

For each test case, output on a new line the value $f(S)$

### Constraints
- $1 \le T \le 10^4$
- $1 \le N \le 2 \cdot 10^5$
- $1 \le S_i \le 10^9$
- $S_i \ne S_j$ for all $i \ne j$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
2
3
1 2 3
5
8 20 4 100 1

```

```
2
1
```

### Explanation:

 **Test Case 1:**  $\{2, 3\}$ is a valid good subset (and the only valid one of size $2$).

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:00:50.095Z  

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
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int size =0;
        for(int j=i;j<n;j++){
            if(a[j]^a[i]<a[j]&a[i]){
                size=j-i+1;
            }
            else break;
        }
        ans=max(ans,size);
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

[View on CodeChef](https://www.codechef.com/problems/GOODSUBSETEZ)