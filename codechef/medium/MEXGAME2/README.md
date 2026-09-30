# MEXGAME2

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MEX Game (Hard)

Alice and Bob are playing a game on an array $A$ of $N$ integers. Alice goes first.

On each of their turn, they choose some index $i$ such that $A_i > 0$, and replace it with $A_i - 1$.

Such a move is valid only if the MEX$^{\dagger}$ value of the entire array does not change. The player unable to make a valid move loses.

You are given an array $A$ of $N$ integers. Count the number of pairs of integers $(L, R)$ such that:

- $1 \le L \le R \le N$
- Alice wins the game on the subarray $[A_L, A_{L + 1}, \ldots, A_R]$

$^{\dagger}$ The MEX of an array is the minimal non-negative element not included in the array.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the winner of the game.

### Constraints
- $1 \le T \le 10^4$
- $1 \le N \le 2 \cdot 10^5$
- $0 \le A_i \le 100$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
4
3
0 3 0
4
0 1 2 3
4
0 0 1 1
1
100

```

```
3
4
2
1
```

### Explanation:

 **Test Case 1:**  The subarrays $[0, 3]$, $[3, 0]$ and $[0, 3, 0]$ are winning for Alice. $[0]$ and $[3]$ are losing.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T15:47:38.303Z  

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
    vll a(n);
    loop cin>>a[i];
    ll mn=0;
    sort(all(a));
    loop{
        if(a[i]==mn) mn++;
    }
    // cout<<mn<<endl;
    set<ll> s;
    ll sum=0,ans=0;
    loop{
        if(a[i]>mn){
            ans+=a[i]-mn-1;
        }
        else{
            if(s.count(a[i])){
                sum+=a[i];
            }
            else{
                s.insert(a[i]);
            }
        }
    }
    ans+=sum;
    if(ans%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
    
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

[View on CodeChef](https://www.codechef.com/problems/MEXGAME2)