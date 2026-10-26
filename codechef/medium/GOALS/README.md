# GOALS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Draw Match

Two teams score $X$ and $Y$ goals in a football match.

Chef likes the match if it ends in a draw and at least one goal is scored during the match. A draw occurs when both teams score the same number of goals.

Determine whether Chef likes the match.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- Each test case contains two space-separated integers $X$ and $Y$, the goals scored by the two teams.
### Output Format

For each test case, print `YES` if Chef likes the match, or `NO` otherwise.

You may print the answer in any combination of uppercase and lowercase letters.

### Constraints
- $1 \leq T \leq 100$
- $0 \leq X, Y \leq 9$
### Sample 1:
Input
Output

```
4
3 3
2 5
0 0
7 7
```

```
YES
NO
NO
YES
```

### Explanation:
- Test case $1$: Both teams score $3$ goals. The match is a draw with goals scored, so Chef likes it.
- Test case $2$: The teams score different numbers of goals, so Chef does not like the match.
- Test case $3$: Neither team scores a goal, so Chef does not like the match.
- Test case $4$: Both teams score $7$ goals. The match is a draw with goals scored, so Chef likes it.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T13:32:09.997Z  

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
    ll x,y;
    cin>>x>>y;
    if(x+y==0){
        no();
        return;
    }
    if(x==y) yes();
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

[View on CodeChef](https://www.codechef.com/problems/GOALS)