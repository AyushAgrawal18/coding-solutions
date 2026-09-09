# SPLDM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Splash Damage

You are playing a video game, where the current level has $N$ monsters in a row. The $i$-th monster from the left has $A_i$ health.
It is guaranteed that $1 \le A_i \le 3$.

A monster is said to be  *alive*  if it has a positive amount of health remaining, and  *dead*  otherwise.

You have a grenade launcher, with which you can do the following:

- Choose a monster $i$ that is currently alive, and launch a grenade at it.
- This will instantly reduce the health of monster $i$ to $0$, turning it dead.
- Further, monsters $i-1$ and $i+1$ will both lose $1$ health each, if they exist and are alive.

You would like to play the game for as long as possible.
Thus, your task is to find the  **maximum**  number of times that you can use the grenade launcher before all monsters are dead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the number of monsters. The second line contains $N$ space-separated integers $A_1, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum number of times you can use the grenade launcher before all monsters are dead.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2\cdot 10^5$
- $1 \le A_i \le 3$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
4
2
1 1
4
1 2 1 3
5
2 1 3 2 1
7
1 2 1 1 2 1 3

```

```
1
3
5
5

```

### Explanation:

 **Test case $1$:**  There are two monsters next to each other, each with $1$ health.
If we fire a grenade at either monster, the splash damage will reduce the health of the other one to $0$ as well.
So, the grenade launcher can only be used once.

 **Test case $2$:**  One way of launching three grenades is:

- First, target monster $4$. This will kill both monsters $3$ and $4$, the resulting health values are $[1, 2, 0, 0]$.
- Next, target monster $1$. This will kill it, and reduce monster $2$'s health by $1$. The resulting health values are $[0, 1, 0, 0]$.
- Finally, target monster $2$, killing it.

It can be verified that there's no way to use the launcher more than $3$ times before every monster is dead.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T15:11:46.112Z  

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


int solve(int i, vll &a){
    if(i==0){
        if(a[i]!=0) return 1;
        return 0;
    }
    int take=1+solve(i-1,a);
    
    
}



inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    int ans = solve(n-1, a);
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

[View on CodeChef](https://www.codechef.com/problems/SPLDM)