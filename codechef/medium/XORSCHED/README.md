# XORSCHED

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Xor Scheduler

 *As always, Hyder seeks Order in Chaos. This time, the CPU is flooded with processes whose arrival times and execution durations are scrambled by chaos. Help him do a few calculations!* 

There are $N+1$ processes indexed from $0$ to $N$. You are given two integers $X$ and $Y$.

For each process $i$, where $0 \le i \le N$:

- Its arrival time is $i \oplus X$.
- Its runtime is $(i \oplus Y) + 1$.

Here, $\oplus$ denotes the bitwise XOR operation.

There is one CPU, available from time $0$.
The CPU will perform the operations in a first-come, first-served manner - that is, whenever the CPU becomes free and there are waiting processes, it executes the waiting process with the earliest arrival time.
Once a process starts executing, it continues until completion.
If no process is waiting, the CPU remains idle until the next process arrives.

The CPU can start a new task in the same instant that an older task finishes.

Determine the time at which all the processes have finished executing.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of a single line containing three space-separated integers $X$, $Y$ and $N$.
### Output Format

For each test case, print a single integer: the time at which all the processes have finished executing.

### Constraints
- $1 \le T \le 10^4$
- $0 \le X, Y, N \lt 2^{30}$
### Sample 1:
Input
Output

```
4
0 0 0
1 2 3
6 2 2
585652603 764651540 577238819

```

```
1
10
13
441459496525093482
```

### Explanation:

 **Test case $1$:**  Process $0$ arrives at time $0$ and has runtime $1$, so it finishes at time $1$.

 **Test case $2$:**  The arrival times of processes $0, 1, 2, 3$ are $1, 0, 3, 2$ and their runtimes are $3, 4, 1, 2$ respectively.
The CPU executes process $1$ during $[0, 4]$, process $0$ during $[4, 7]$, process $3$ during $[7, 9]$ and process $2$ during $[9, 10]$.

 **Test case $3$:**  The arrival times of processes $0, 1, 2$ are $6, 7, 4$ and their runtimes are $3, 4, 1$ respectively.
The CPU is idle until time $4$, executes process $2$ during $[4, 5]$, is idle again until time $6$, then executes process $0$ during $[6, 9]$ and process $1$ during $[9, 13]$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T14:59:35.982Z  

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

[View on CodeChef](https://www.codechef.com/problems/XORSCHED)