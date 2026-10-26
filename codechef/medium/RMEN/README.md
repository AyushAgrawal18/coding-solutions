# RMEN

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Reverse Mirror Encoding

You are given an encoded string $S$ representing a message written using lowercase English letters.

The message uses a  **reverse mirror encoding**.

For letters from `a` to `n`, each letter is replaced by its mirror within this range. For example, `a` becomes `n`, `b` becomes `m`, and `j` becomes `e`.

For letters from `o` to `z`, each letter is replaced by its mirror within this range, followed by `#`. For example, `z` becomes `o#`, `y` becomes `p#`, and `t` becomes `u#`.

You are given a message encoded using these rules. Decode it and print the  **original message**.

### Input Format
- The first line contains the encoded string $S$.
### Output Format
- Print a single string — the decoded message.
### Constraints
- $2 \le |S| \le 10^3$
- $S$ contains only lowercase English letters and #.
- Every # appears immediately after a letter from o to z.
- The encoded string is guaranteed to be valid.
### Sample 1:
Input
Output

```
u#jlg
```

```
tech
```

### Explanation:

The encoded tokens are decoded as:

`u#` $\rightarrow$ `t`, `j` $\rightarrow$ `e`, `l` $\rightarrow$ `c`, `g` $\rightarrow$ `h`.

Therefore, the decoded message is `tech`.

### Sample 2:
Input
Output

```
mjt#av#u#z#y#y#nmcj
```

```
beunstoppable
```

### Explanation:

Decoding each token in order gives:

`b`, `e`, `u`, `n`, `s`, `t`, `o`, `p`, `p`, `a`, `b`, `l`, `e`.

Therefore, the decoded message is `beunstoppable`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T14:08:55.973Z  

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
typedef vector<char> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);



inline void solve() {
    // Your solution goes here
    string s;
    cin>>s;
    vll a;
    for(char i='n';i>='a';i--){
        a.pb(i);
    }
    vll b;
    for(char i='z';i>='o';i--){
        b.pb(i);
    }
    vll ans;
    for(int i=0;i<s.size();i++){
        if(s[i]>='o'){
            int p=(int)(s[i]-'o');
            ans.pb(b[p]);
            i++;
        }
        else{
            int p=(int)(s[i]-'a');
            ans.pb(a[p]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/RMEN)