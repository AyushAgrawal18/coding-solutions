# EXQUIZ

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exun Quiz

The prelims of the Exun quiz have $N$ questions. A correct answer earns $4$ points, a wrong answer costs $1$ point, and a skipped question gives $0$ points.

After the prelims, a team walks up to the quizmaster with a final score of $S$. The quizmaster is curious: what is the smallest number of questions the team could have attempted (answered correctly or wrongly) to finish with exactly $S$ points? If no way of answering the $N$ questions gives exactly $S$ points, the scoresheet must contain an error.

### Input Format
- The first line of input contains a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line containing two space-separated integers $N$ and $S$.
### Output Format

For each test case, output on a new line the minimum number of attempted questions, or $-1$ if a score of exactly $S$ is impossible.

### Constraints
- $1 \leq T \leq 10000$
- $1 \leq N \leq 50$
- $0 \leq S \lt 200$
### Sample 1:
Input
Output

```
6
10 7
10 9
10 40
7 0
1 3
1 5

```

```
3
6
10
0
-1
-1

```

### Explanation:

Test case $1$: $2$ correct answers and $1$ wrong answer give $8 - 1 = 7$ points with $3$ attempts.

Test case $4$: Since the final score is $0$, all questions can be skipped.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T14:40:53.749Z  

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
    ll n,s;
    cin>>n>>s;
    ll x=(s+3)/4;
    x+=(x*4)-s;
    if(x>n){
        cout<<-1<<endl;
        return;
    }
    cout<<x<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/EXQUIZ)