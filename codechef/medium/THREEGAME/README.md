# THREEGAME

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Three Player Game

You are organizing a simple $3$-player game. It consists of several rounds, each round being won by exactly one of the $3$ players.

You have decided to conduct at least $N$ rounds, but if after $N$ rounds there is no clear winner; you will conduct additional rounds till there is a clear winner. A clear winner is one who has won strictly more games than the other $2$ players.

Find the maximum number of rounds you may have to conduct.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of input contains a single integer $N$.
### Output Format

For each test case, output on a new line the maximum number of rounds you may have to conduct.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 10^9$
### Sample 1:
Input
Output

```
3
1
2
3

```

```
1
4
4
```

### Explanation:

 **Test Case 1:**  After $1$ game, there is always a clear winner (the person who won that game).

 **Test Case 2:**  Here is a possible way the game could last $4$ rounds:

- Person $1$ wins round $1$.
- Person $2$ wins round $2$. $2$ games are up, but persons $1$ and $2$ are tied.
- Person $3$ wins round $3$. Everybody is tied.
- Person $3$ wins round $4$, and is the clear winner.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T15:22:23.397Z  

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
    int divi = n/3;
    int rem = n%3;
    if(rem==0) cout<<n+1<<endl;
    else if(rem==1) cout<<n<<endl;
    else if(rem==2) cout<<n+2<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/THREEGAME)