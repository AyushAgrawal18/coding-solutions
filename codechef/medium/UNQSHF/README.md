# UNQSHF

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Unequal Shuffle

You are given two strings $A$ and $B$, both of length $N$.
Every character in both strings is either `'a'` or `'b'`.

You are allowed to shuffle the characters of $A$ among themselves.
You are also allowed to shuffle the characters of $B$ among themselves.

Is it possible, after shuffling, to ensure that $A_i \ne B_i$ for  **every**  $1 \le i \le N$?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three lines of input. The first line of each test case contains a single integer $N$ — the length of the strings. The second line of each test case contains the string $A$ of length $N$. The third line of each test case contains the string $B$ of length $N$.
### Output Format

For each test case, output on a new line the answer: `YES` if the strings can be shuffled to satisfy the condition, and `NO` otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e. the strings `NO`, `No`, `nO`, and `no` will be treated as equivalent.

### Constraints
- $1 \leq T \leq 202$
- $1 \leq N \leq 100$
- $A$ and $B$ contain only the characters a and b.
### Sample 1:
Input
Output

```
4
2
ab
aa
3
abb
baa
4
aabb
baba
4
abba
aaab

```

```
NO
YES
YES
NO

```

### Explanation:

 **Test case $1$:**  We have $A = \texttt{ab}$ and $B = \texttt{aa}$.
$B$ doesn't change value upon shuffling, and $A$ can be made either $\texttt{ab}$ or $\texttt{ba}$.
If $A$ is made into $\texttt{ab}$ then $A_1 = B_1$, while if it's made into $\texttt{ba}$ then $A_2 = B_2$.
So, no solution exists.

 **Test case $2$:**  We have $A = \texttt{abb}$ and $B = \texttt{baa}$. They already satisfy the requisite condition without shuffling.

 **Test case $3$:**  We have $A = \texttt{aabb}$ and $B = \texttt{baba}$. We can turn $A$ into $\texttt{abab}$ and leave $B$ unchanged, and the condition is satisfied.

 **Test case $4$:**  It can be verified that no matter how we shuffle the strings, some index will always contain the same character in both $A$ and $B$, so no solution exists.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T15:50:41.259Z  

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
    string a,b;
    cin>>a>>b;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]=='a') x++;
        if(b[i]=='b') y++;
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

[View on CodeChef](https://www.codechef.com/problems/UNQSHF)