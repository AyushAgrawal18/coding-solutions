# UNIQUE2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Unique Elements 2

You are given an array $A$ containing $N$ integers. The array may contain duplicate elements.

Your task is to print all distinct elements of the array in the order of their first occurrence. Each element should appear exactly once in the output.

### Input Format
- The first line contains an integer $N$, representing the size of the array.
- The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$, representing the array elements.
### Output Format

Print all distinct elements separated by a single space, preserving their order of first occurrence.

### Constraints
- $1 \leq N \leq 10^5$
- $1 \leq A_i \leq 10^5$
### Sample 1:
Input
Output

```
7
5 5 8 8 3 5 3
```

```
5 8 3
```

### Explanation:

The elements $5$, $8$, and $3$ appear for the first time in that order. Repeated occurrences are excluded from the output.

### Sample 2:
Input
Output

```
9
12 7 12 4 7 15 4 9 15
```

```
12 7 4 15 9
```

### Explanation:

The distinct elements are $12$, $7$, $4$, $15$, and $9$, in the order of their first occurrence. All subsequent occurrences of these elements are ignored.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T13:34:43.953Z  

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
    map<ll,ll> freq;
    vll ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(freq[x]==0){
            freq[x]++;
            ans.pb(x);
        }
        else continue;
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/UNIQUE2)