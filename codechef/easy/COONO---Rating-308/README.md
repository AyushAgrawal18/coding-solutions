# COONO - Rating 308

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### ScoreBoard

A game has two rounds. A player scores $A$ points in the first round and $B$ points in the second round. The scoreboard displays $C$ as the total score.

Determine whether the displayed total is correct.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- Each test case contains three space-separated integers $A$, $B$, and $C$.
### Output Format

For each test case, print `YES` if the displayed total is correct, or `NO` otherwise, on a separate line.

You may print the answer in any combination of uppercase and lowercase letters.

### Constraints
- $1 \le T \le 100$
- $0 \le A, B, C \le 100$
### Sample 1:
Input
Output

```
4
12 8 20
7 6 12
0 15 15
50 60 100
```

```
YES
NO
YES
NO
```

### Explanation:
- Test case $1$: The total score is $12+8=20$, matching the scoreboard.
- Test case $2$: The total score is $7+6=13$, but the scoreboard displays $12$.
- Test case $3$: The total score is $0+15=15$, matching the scoreboard.
- Test case $4$: The total score is $50+60=110$, but the scoreboard displays $100$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T18:55:09.050Z  

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
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==a+b) yes();
    else no();
    
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

[View on CodeChef](https://www.codechef.com/problems/COONO)