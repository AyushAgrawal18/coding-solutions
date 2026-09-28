# DSCOP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Discount

You are buying an item that costs $N$ rupees.

The shopkeeper gives you a special discount: you may remove  **exactly one digit**  from the decimal representation of $N$. The remaining digits, in the same order, form the new price you have to pay.

Your task is to find the  **minimum possible price**  after removing exactly one digit.

The resulting number may contain leading zeros. However, while printing the answer, leading zeros must not be printed.

### Input Format
- The first line contains an integer $T$, the number of test cases.
- Each of the next $T$ lines contains a single integer $N$.
### Output Format

For each test case, print the minimum price that can be obtained after removing exactly one digit from $N$.

Print each answer on a separate line.

### Constraints
- $1 \le T \le 10^5$
- $10 \le N \le 10^9$
### Sample 1:
Input
Output

```
4
57
908
1005
4321
```

```
5
8
5
321
```

### Explanation:

 **Test Case 1:** 

For $N = 57$:

- Removing $5$ gives $7$.
- Removing $7$ gives $5$.

Therefore, the minimum possible price is $5$.

 **Test Case 2:** 

For $N = 908$:

- Removing $9$ gives $08$, which is printed as $8$.
- Removing $0$ gives $98$.
- Removing $8$ gives $90$.

Therefore, the minimum possible price is $8$.

 **Test Case 3:** 

For $N = 1005$, removing the first digit gives $005$, which is printed as $5$.

Therefore, the minimum possible price is $5$.

 **Test Case 4:** 

For $N = 4321$, the possible prices are $321$, $421$, $431$, and $432$.

Therefore, the minimum possible price is $321$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T13:48:58.024Z  

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
    string s;
    cin >> s;
    string ans = "";

    for (int i=0;i<s.size();i++) {
        string cur=s.substr(0,i)+s.substr(i+1);
        if (ans.empty()||stoll(cur)<stoll(ans)) {
            ans=cur;
        }
    }
    cout<<stoll(ans)<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/DSCOP)