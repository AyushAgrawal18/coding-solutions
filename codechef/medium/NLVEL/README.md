# NLVEL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Next Level

Chef is playing a video game and has collected $X$ stars. He needs  **at least $60$ stars**  to unlock the next level.

Determine whether Chef can unlock the next level.

### Input Format

The only line contains an integer $X$ — the number of stars Chef has collected.

### Output Format

Print `YES` if Chef can unlock the next level, otherwise print `NO`.

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings `NO`, `no`, `No`, and `nO` will all be treated as equivalent.

### Constraints
- $1 \leq X \leq 100$
### Sample 1:
Input
Output

```
45
```

```
No
```

### Explanation:

Chef has $45$ stars, which is fewer than the required $60$ stars.

### Sample 2:
Input
Output

```
80
```

```
Yes
```

### Explanation:

Chef has $80$ stars, which is more than the required $60$ stars.

### Sample 3:
Input
Output

```
60

```

```
Yes

```

### Explanation:

Chef has $60$ stars, which is equal to the required $60$ stars.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T13:31:51.686Z  

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
    if(n>=60) yes();
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

[View on CodeChef](https://www.codechef.com/problems/NLVEL)