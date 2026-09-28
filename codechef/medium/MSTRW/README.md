# MSTRW

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Minimum String Weight

Chef is preparing a string $S$ for storage. Its  **weight**  is the sum of the squares of the frequencies of its distinct characters.

For example, the weight of aab is $2^2+1^2=5$.

Chef must remove  **exactly $K$ characters**  from $S$. The removed characters may come from any positions. Find the  **minimum possible weight**  of the remaining string.

An empty string has weight $0$.

### Input Format
- The first line contains the string $S$. This line may be empty.
- The second line contains an integer $K$, the number of characters to remove.
### Output Format

Print a single integer — the minimum possible weight after exactly $K$ removals.

### Constraints
- $0 \le K \le 5\times10^4$
- $1 \le |S| \le 5\times10^4$
- $K \le |S|$
- Every character of $S$ is a lowercase English letter.
### Sample 1:
Input
Output

```
abccc
1
```

```
6
```

### Explanation:

Remove one occurrence of c. The remaining frequencies are $1$, $1$, and $2$, giving weight $1^2+1^2+2^2=6$.

Removing a or b instead would leave weight $10$, so $6$ is the minimum.

### Sample 2:
Input
Output

```
aabcbcbcabcc
3
```

```
27
```

### Explanation:

The frequencies of a, b, and c are $3$, $4$, and $5$. Remove one b and two copies of c to leave frequency $3$ for every character.

The weight is $3^2+3^2+3^2=27$. This equal distribution minimizes the weight of the nine remaining characters.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T14:43:26.250Z  

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
    ll k;
    cin>>k;
    vll a(26,0);
    for(int i=0;i<s.size();i++){
        ll x = s[i]-'a';
        a[x]++;
    }
    for(int i=0;i<k;i++){
    sort(rall(a));
    a[0]--;
    }
    ll ans=0;
    for(int i=0;i<26;i++){
        ll x=a[i]*a[i];
        ans+=x;
    }
    cout<<ans;
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

[View on CodeChef](https://www.codechef.com/problems/MSTRW)