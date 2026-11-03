# CHOCOMOCO - Rating 809

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Choco Gifts

A chocolate shop prepares two types of gift boxes: large boxes containing $4$ chocolates each and small boxes containing $2$ chocolates each.

The shop has $N$ chocolates, where $N$ is even. It uses them to prepare as many large boxes as possible, then prepares small boxes with the remaining chocolates.

A customer wants to buy a small gift box. Determine whether at least one will be available.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- Each test case contains a single integer $N$, the number of chocolates.
### Output Format

For each test case, print `YES` if at least one small gift box is available, or `NO` otherwise, on a separate line.

You may print the answer in any combination of uppercase and lowercase letters.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 1000$
- $N$ is even.
### Sample 1:
Input
Output

```
4
14
20
2
26
```

```
YES
NO
YES
YES
```

### Explanation:
- Test case $1$: The shop prepares $3$ large boxes using $12$ chocolates. The remaining $2$ chocolates are used to prepare one small box.
- Test case $2$: The shop prepares $5$ large boxes using all $20$ chocolates. No small box is available.
- Test case $3$: There are not enough chocolates for a large box, so the shop prepares one small box using both chocolates.
- Test case $4$: The shop prepares $6$ large boxes using $24$ chocolates. The remaining $2$ chocolates are used to prepare one small box.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T18:56:25.687Z  

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
    if(n%4==0) no();
    else yes();
    
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

[View on CodeChef](https://www.codechef.com/problems/CHOCOMOCO)