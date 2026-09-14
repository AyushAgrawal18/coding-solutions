# MISNUMM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Missing Numbers

Chef has an original array $B$. After some elements are removed and the remaining elements are rearranged, it becomes array $A$.

Find all numbers whose  **frequency in $A$ is smaller than their frequency in $B$**. Print each such number  **once**, in increasing order.

It is possible that no elements were removed.

### Input Format
- The first line contains an integer $N$, the length of $A$.
- The second line contains $N$ integers $A_1,A_2,\ldots,A_N$.
- The third line contains an integer $M$, the length of $B$.
- The fourth line contains $M$ integers $B_1,B_2,\ldots,B_M$.
### Output Format

Print the missing numbers in increasing order, separated by spaces. If no numbers are missing, print $-1$.

### Constraints
- $1 \le N \le M \le 100$
- $1 \le A_i,B_i \le 10^4$
- $\max(B)-\min(B) \le 100$
- For every value, its frequency in $A$ does not exceed its frequency in $B$.
### Sample 1:
Input
Output

```
6
7 2 5 3 5 3
8
7 2 5 4 6 3 5 3
```

```
4 6
```

### Explanation:

Numbers $4$ and $6$ each occur once in $B$ and do not occur in $A$. Every other number has the same frequency in both arrays.

### Sample 2:
Input
Output

```
10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204
```

```
204 205 206
```

### Explanation:

Each of $204$, $205$, and $206$ occurs three times in $B$ but only twice in $A$. Each missing number is printed once.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T13:57:58.148Z  

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
    ll m;
    cin>>m;
    vll b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    if(n==m){
        cout<<-1;
        return;
    }
    sort(all(a));
    sort(all(b));
    vll ans;
    int x=0;
    for(int i=0;i<m;i++){
        if(a[x]==b[i]){
            x++;
        }
        else{
            ans.push_back(b[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
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

[View on CodeChef](https://www.codechef.com/problems/MISNUMM)