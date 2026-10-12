# SWSHI

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sweet Shopping

Chef visits a shop with $N$ sweets arranged in a row. The $i$-th sweet costs $A_i$ rupees, and Chef has $M$ rupees.

Chef can choose any starting position, but the sweets he buys must form a  **consecutive segment**  of the row. Their total cost must be  **at most $M$**. The row does not wrap around: the first sweet does not follow the last.

Find the  **maximum number of sweets**  Chef can buy. If he cannot afford any sweet, the answer is $0$.

### Input Format
- The first line contains an integer $T$ — the number of test cases.
- For each test case: The first line contains two space-separated integers $N$ and $M$. The second line contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$.
### Output Format

For each test case, print the maximum number of sweets Chef can buy on a separate line.

### Constraints
- $1 \le T \le 1000$
- $1 \le N \le 10^5$
- $1 \le M \le 10^9$
- $1 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $10^5$.
### Sample 1:
Input
Output

```
2
6 8
5 2 1 3 2 6
4 5
3 3 3 3
```

```
4
1
```

### Explanation:

 **Test case 1:**  Chef can buy sweets at positions $2$ through $5$ for $2+1+3+2=8$ rupees. Both segments of length $5$ exceed his budget, so the maximum is $4$.

 **Test case 2:**  One sweet costs $3$ rupees, but any two consecutive sweets cost $6$ rupees. Therefore, Chef can buy at most $1$ sweet.

### Sample 2:
Input
Output

```
2
3 4
5 7 6
4 10
1 2 3 4
```

```
0
4
```

### Explanation:

 **Test case 1:**  Every sweet costs more than $4$ rupees, so Chef cannot buy any sweet.

 **Test case 2:**  All four sweets together cost $1+2+3+4=10$ rupees, exactly matching Chef's budget.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T13:53:28.742Z  

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
    ll n,m;
    cin>>n>>m;
    vll a(n);
    loop cin>>a[i];
    ll cnt=0,ans=0,sum=0,l=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        cnt++;
        while(sum>m&&l<=i){
            sum-=a[l];
            cnt--;
            l++;
        }
        ans=max(ans,cnt);
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

[View on CodeChef](https://www.codechef.com/problems/SWSHI)