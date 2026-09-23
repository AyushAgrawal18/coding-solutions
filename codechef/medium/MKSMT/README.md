# MKSMT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Smoothen

For an array $B$ of length $M$, and an integer $X$, define  *smoothing*  b with respect to $X$ as follows:

- Start with $S = 0$
- For each $i = 1, 2, 3, \ldots, M$ in order: If $B_i \ge X$, add $B_i - X$ to $S$ and set $B_i = X$. If $B_i \lt X$, add $\min(S, X-B_i)$ to $B_i$ and subtract the same value from $S$.

Note that $S$ may be positive in the end, but that's fine - we don't do anything with this "extra" value.

For example, if $B = [4, 6, 1, 5, 1]$,

- Smoothing it with $X = 2$ will result in $[2, 2, 2, 2, 2]$.
- Smoothing it with $X = 4$ will result in $[4, 4, 3, 4, 2]$.

You're given an array $A$.
Find the  **largest**  positive integer $X$ such that there exists a pair of integers $(L, R)$ ($1 \le L \le R \le N$) satisfying the following:

- If the subarray of $A$ from index $L$ to index $R$ is smoothed by $X$, the entire array $A$ becomes sorted in non-decreasing order.

If there are arbitrarily large values of $X$ that can cause $A$ to become sorted after smoothing a subarray, print $-1$ instead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the length of the array. The second line contains $N$ space-separated integers $A_1, \ldots, A_N$.
### Output Format

For each test case, on a new line:

- If there's no finite maximum $X$, print $-1$.
- Otherwise print the maximum valid $X$.
### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2\cdot 10^5$
- $1 \le A_i \le 10^9$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
3
4
2 4 4 7
5
2 7 3 3 9
6
1 2 10 3 4 20

```

```
-1
4
5

```

### Explanation:

 **Test case $1$:**  The array is already sorted, so any value of $X$ is valid (for example by choosing $L=R=1$ always). There is no finite maximum valid $X$, so we output $-1$.

 **Test case $2$:**  We have $A = [2, 7, 3, 3, 9]$. Consider choosing $X = 4, L = 2, R = 4$.

- We want to smoothen the subarray $[7, 3, 3]$ with respect to $4$. This will occur as follows:
- Initially, $S = 0$.
- When processing $7$, we add $7-4 = 3$ to $S$ and then set the $7$ to $4$. The subarray is now $[4, 3, 3]$.
- When processing the first $3$, we add $1$ to it and subtract $1$ from $S$. The subarray is now $[4, 4, 3]$ and $S = 2$.
- When processing the second $3$, we again add $1$ to it and subtract $1$ from $S$. The subarray is now $[4, 4, 4]$ and $S = 1$.

After smoothing this subarray, the array is $[2, 4, 4, 4, 9]$ which is sorted.

It can be verified that for any $X \gt 4$, no choice of subarray can make the array sorted; so the answer is $4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T15:49:28.063Z  

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


bool check(ll x, vll a){
    ll n=a.size();
    ll sum=0;
    loop {
        if(a[i]>=x){
            a[i]=x;
            sum+=(a[i]-x);
        }
        else{
            int temp=min(sum,x-a[i]);
            a[i]+=temp;
            sum-=temp;
        }
    }
    if(is_sorted(all(a))) return true;
    return false;
}



inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    // if(is_sorted(all(a))){
    //     cout<<-1<<endl;
    //     return;
    // }
    // ll l=1, r=1e9;
    // ll ans=0;
    // while(l<=r){
    //     ll mid= l+(r-l)/2;
    //     if(check(mid, a)){
    //         ans=mid;
    //         l=mid+1;
    //     }
    //     else{
    //         r=mid-1;
    //     }
    // }
    // cout<<ans<<endl;
    ll x=4;
    ll sum=0;
    loop {
        if(a[i]>=x){
            a[i]=x;
            sum+=(a[i]-x);
        }
        else{
            int temp=min(sum,x-a[i]);
            a[i]+=temp;
            sum-=temp;
        }
    }
    // if(is_sorted(all(a))) return true;
    // return false;
    loop cout<<a[i]<<" ";
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

[View on CodeChef](https://www.codechef.com/problems/MKSMT)