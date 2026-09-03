# FLIPPRE - Rating 1148

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Flip Prefix

You are given a  **binary**  string $S$ of length $N$, i.e. $S_i = 0$ or $1$.

You can do the following operation as many times as you want (possibly zero):

- Choose a prefix $S[1, X]$ ($1 \le X \le N$) such that there are equal number of $0$s and $1$s in this prefix, and then flip$^{\dagger}$ that prefix.

For example, in the string $001101$, we can choose the prefix of length $4$ which has $2$ $0$s and $2$ $1$s, flipping it produces $110001$.

Count the number of possible strings you can obtain by doing these operations.

$^{\dagger}$ To flip a string means to change all $0$s to $1$s and all $1$s to $0$s.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains $N$ - the size of the string The second line contains $S$ - a binary string.
### Output Format

For each test case, output on a new line the count of strings obtainable.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 60$
- $|S| = N$
- $S_i \in \{0, 1\}$
### Sample 1:
Input
Output

```
3
3
010
4
0010
6
001101

```

```
2
1
4
```

### Explanation:

 **Test Case 1**  : Flip the prefix of length $2$ to obtain $100$. The original string, $010$ should also be counted. Hence the answer is $2$.

 **Test Case 2**  : No prefixes have equal $0$s and $1$s, so no operations are possible. The original string $0010$ is the only possible string.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-03T19:39:04.398Z  

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
    string s;
    cin>>s;
    ll count=0,one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
        
        if(one==zero) count++;
    }
    ll ans = pow(2,count);
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

[View on CodeChef](https://www.codechef.com/problems/FLIPPRE)