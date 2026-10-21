# EXKEYPAD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Sticky Keypad

You are given $2$ integers $N$ and $D$.

Find the smallest integer $x$ which is

- greater than or equal to $N$
- typeable without the digit $D$.

Formally, a non-negative integer $x$ is  **typeable**  if its usual decimal representation (no leading zeros; zero is written as the single digit $0$) does not contain the digit $D$.

### Input Format
- The first line contains a single integer $T$, the number of test cases.
- Each of the next $T$ lines contains two space-separated integers $N$ and $D$.
### Output Format

For each test case, output on a new line the smallest integer $x \ge N$ typeable without digit $D$.

### Constraints
- $1 \le T \le 10^{3}$
- $1 \le N \le 10^{9}$
- $0 \le D \le 9$
### Sample 1:
Input
Output

```
5
99 9
1000 0
12345 3
7 7
2026 5
```

```
100
1111
12400
8
2026

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:08:20.957Z  

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


bool check(ll n,ll d){
    while(n>0){
        ll temp=n%10;
        if(temp==d) return false;
        n=n/10;
    }
    return true;
}



inline void solve() {
    // Your solution goes here
    string n,d;
    cin>>n>>d;
    string ans="";
    for(int i=0;i<n.size();i++){
        if (n[i]==d[0]){
            if (n[i]=='9'){
                if (i==0){
                    ans+="10";
                } 
                else{
                    ans+='0';
                }
            } 
            else{
                ans+=char(n[i]+1);
            }
        } 
        else{
            ans += n[i];
        }
    }
    bool change=false;
    for(int i=0;i<ans.size();i++){
        if(i>=n.size()) break;
        if(n[i]!=ans[i]){ 
            change=true;
            continue;
        }
        if(change==true){
            if(d[0]!='0') ans[i]='0';
            else ans[i]='1';
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

[View on CodeChef](https://www.codechef.com/problems/EXKEYPAD)