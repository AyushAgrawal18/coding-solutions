# ODDPWD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Odd Password

Hyder and Nikhil are stuck in an abandoned city and want to escape as soon as possible. The only way out is through the subway, but to start it, they must enter the correct password.

On their way, they picked up a mysterious string of exactly five characters. They suspect it holds the key to unlocking the subway, but they must figure out how to extract the password from it.

They also received a hint on how to obtain the password from the string, which says:

- The password consists of the $1$-st, $3$-rd and $5$-th characters of the string, in that order.

Help them find the password and escape this chaos!

### Input Format
- The input consists of a single line containing a string $S$ of length $5$.
### Output Format

Print the password required to start the subway.

### Constraints
- $S$ has length $5$.
- $S$ contains only uppercase English letters
### Sample 1:
Input
Output

```
ORDER
```

```
ODR
```

### Explanation:

Looking at `ORDER`, the first character is `O`, the third is `D`, and the fifth is `R`. So, the password is `ODR`.

### Sample 2:
Input
Output

```
CHAOS
```

```
CAS
```

### Explanation:

Looking at `CHAOS`, the first character is `C`, the third is `A`, and the fifth is `S`. So, the password is `CAS`.

### Sample 3:
Input
Output

```
WTETC
```

```
WEC
```

### Explanation:

The password is `WEC`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T15:16:34.065Z  

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
    string s;
    cin>>s;
    cout<<s[0]<<s[2]<<s[4]<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/ODDPWD)