# RHYDOOR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Rhythmic Door

Nikhil discovers a sealed room hidden beneath an abandoned arcade. Its entrance is controlled by an old rhythm lock with two buttons, `A` and `B`.

The lock records every button press. Whenever the same button has been pressed  **three consecutive times**, the door opens once, and the lock immediately resets its counter to zero.
Any remaining presses start a fresh count, even if they use the same button.
If the button changes before three consecutive presses are reached, the new button starts a new streak; and the old streak is lost.

Nikhil has recovered the complete sequence of button presses recorded by the lock. Given this sequence, determine how many times the door opened.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, the number of button presses. The second line contains a string $S$ of length $N$, consisting only of the characters A and B, representing the sequence of button presses.
### Output Format

For each test case, print a single integer: the number of times the door opened.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $S$ consists only of the characters A and B.
### Sample 1:
Input
Output

```
5
5
AABBB
6
AAABBB
8
AAAAAAAA
6
ABABBA
16
BBBBAAAAABBBBBBB
```

```
1
2
2
0
4
```

### Explanation:

 **Test case $1$:**  The last three presses are all `B`, so the door opens once.

 **Test case $2$:**  The first three presses are all `A` and the last three presses are all `B`, so the door opens twice.

 **Test case $3$:**  The door opens after the $3$-rd press and again after the $6$-th press. The remaining two presses are not enough to open it again.

 **Test case $4$:**  No button is pressed three consecutive times, so the door never opens.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T15:21:26.560Z  

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
    string s;
    cin>>s;
    ll cnt=1;
    ll ans=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) cnt++;
        if(cnt==3){
            ans++;
            i++;
            cnt=1;
        }
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

[View on CodeChef](https://www.codechef.com/problems/RHYDOOR)