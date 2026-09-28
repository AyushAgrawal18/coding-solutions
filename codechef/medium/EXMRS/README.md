# EXMRS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exam Result

Chef has received his exam results. He answered $C$ questions correctly and $W$ questions incorrectly. Each correct answer earns $M$ marks, while each incorrect answer deducts $P$ marks.

Chef needs a final score of  **at least $R$ marks**  to pass. Determine whether he passes the exam. His final score may be negative.

### Input Format

The only line contains five space-separated integers $C$, $M$, $W$, $P$, and $R$.

### Output Format

Print `YES` if Chef passes the exam, otherwise print `NO`.

### Constraints
- $0 \le C,W \le 100$
- $1 \le M,P \le 10$
- $0 \le R \le 1000$
### Sample 1:
Input
Output

```
8 4 2 1 30
```

```
YES
```

### Explanation:

Chef earns $8 \times 4=32$ marks and loses $2 \times 1=2$ marks. His final score is $30$, exactly the required score, so he passes.

### Sample 2:
Input
Output

```
0 4 5 2 0
```

```
NO
```

### Explanation:

Chef earns no marks and loses $5 \times 2=10$ marks. His final score is $-10$, which is below the required score of $0$, so he fails.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T13:52:29.809Z  

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
    ll c,m,w,p,r;
    cin>>c>>m>>w>>p>>r;
    ll score=(c*m)-(w*p);
    if(score>=r) yes();
    else no();
    
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

[View on CodeChef](https://www.codechef.com/problems/EXMRS)