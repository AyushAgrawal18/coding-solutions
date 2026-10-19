# DSA3B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sliding Window Maximum

You are given an array $A = [A_1, A_2, \ldots, A_N]$ of $N$ integers and an integer $X$.

Find the maximum element in each contiguous subarray of size $X$, considering the subarrays from left to right.

The first output value is $\max(A_1, A_2, \ldots, A_X)$, the second, if it exists, is $\max(A_2, A_3, \ldots, A_{X+1})$, and so on, until the last value $\max(A_{N-X+1}, \ldots, A_N)$.

Print these $N-X+1$ maximum values as space-separated integers.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains two space-separated integers $N$ and $X$ — the number of elements in the array and the size of subarrays. The next line contains $N$ space-separated integers, the elements of array $A$.
### Output Format

For each test case, print $N-X+1$ space-separated integers on a single line. The $i$-th integer must be $\max(A_i, A_{i+1}, \ldots, A_{i+X-1})$, for $1 \le i \le N-X+1$.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq X \leq N \leq 10^5$
- $1 \leq A_i \leq 10^9$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Subtasks
- Subtask 1 (30 points): $1 \leq X \leq N \leq 1000$
- Subtask 2 (70 points): Original Constraints.
### Sample 1:
Input
Output

```
3
4 2
1 2 3 4
4 3
4 3 2 1
3 1
9 7 10

```

```
2 3 4
4 3
9 7 10

```

### Explanation:

 **Test case $1$:**  For the array $A = [1, 2, 3, 4]$:

- The maximum element in the subarray $[1, 2]$ is $2$.
- The maximum element in the subarray $[2, 3]$ is $3$.
- The maximum element in the subarray $[3, 4]$ is $4$.

Note that the subarrays are traversed from left to right.

 **Test case $2$:**  For the array $A = [4, 3, 2, 1]$:

- The maximum element in the subarray $[4, 3, 2]$ is $4$.
- The maximum element in the subarray $[3, 2, 1]$ is $3$.

 **Test case $3$:**  For the array $A = [9, 7, 10]$:

- The maximum element in the subarray $[9]$ is $9$.
- The maximum element in the subarray $[7]$ is $7$.
- The maximum element in the subarray $[10]$ is $10$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T13:55:23.599Z  

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
    ll n,x;
    cin>>n>>x;
    vll a(n);
    loop cin>>a[i];
    priority_queue<pair<int, int>> pq;
    loop{
        pq.push({a[i],i});
        while(!pq.empty()&&pq.top().second<=i-x){
            pq.pop();
        }
        if(i>=x-1) {
            cout<<pq.top().first <<" ";
        }
    }
    cout<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/DSA3B)