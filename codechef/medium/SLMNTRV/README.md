# SLMNTRV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Salesman Travels

 *As always, Hyder seeks Order in Chaos. The cities are currently in complete chaos, and Hyder wants to bring some order to them by arranging them in a suitable route.* 

There are $N$ cities numbered from $1$ to $N$. Hyder wants to visit every city exactly once, in some order. Let this order be represented by a permutation $P$ of $[1,N]$.

Hyder starts at city $P_1$ and wants to reach city $P_N$. To bring order to the chaos, the route must be governed by the following rules:

- For every $i>0$ such that $2i+1 \leq N$, Hyder can travel from city $P_{2i}$ to city $P_{2i+1}$ without any restrictions.
- For every $i>0$ such that $2i \leq N$, Hyder can travel from city $P_{2i-1}$ to city $P_{2i}$ if and only if there exists a positive integer $X$ such that:
$$ \left|P_{2i} \cdot P_{2i-1} - X^2\right| \leq K $$

that is, the product of $P_{2i}$ and $P_{2i-1}$ is within a distance of $K$ from some square integer.

Note that different indices $i$ may use different values of $X$.

Your task is to determine any permutation $P$ for which Hyder can successfully travel from $P_1$ to $P_N$.

If there are multiple valid permutations, any one of them will be accepted.
If no such permutation exists, print $-1$ instead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input. The only line of each test case contains two space-separated integers $N$ and $K$, denoting the number of cities and the allowed deviation from a perfect square.
### Output Format

For each test case,

- If no valid permutation exists, print $-1$.
- Otherwise, output on a new line $N$ space-separated integers representing a permutation $P$ of $[1,N]$ such that Hyder can travel from $P_1$ to $P_N$.

If multiple valid permutations exist, output any one of them.

### Constraints
- $1 \leq T \leq 2500$
- $1 \leq N \leq 50$
- $1 \leq K \leq 50$
### Sample 1:
Input
Output

```
2
2 3
5 2

```

```
1 2
3 2 5 1 4
```

### Explanation:

 **Test case $1$:**  There are only two cities, and the move $P_1 \to P_2$ is valid because $1\cdot 2 = 2$, and choosing $X = 2$ gives us $|2-2^2| = |2-4| = 2 \le 3 = K$.

 **Test case $2$:**  Consider $P = [4, 3, 2, 5, 1]$. The moves $2 \to 5$ and $1\to 4$ are unrestricted.

- For the move $3 \to 2$, taking $X = 2$ gives $|3 \cdot 2 - 2^2| = 2 \le K$.
- For the move $5 \to 1$, taking $X = 2$ gives $|5 \cdot 1 - 2^2| = 1 \le K$.

Hence the route is valid. Other valid permutations would also be accepted.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:27:52.590Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0)

bool valid(int a, int b, int k) {
    int product = a * b;

    for (int x = 1; x * x <= product + k; x++) {
        if (abs(product - x * x) <= k)
            return true;
    }

    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> ans;
    vector<bool> used(n + 1, false);

    for (int i = 1; i <= n; i++) {

        if (used[i])
            continue;

        bool found = false;

        for (int j = i + 1; j <= n; j++) {

            if (used[j])
                continue;

            if (valid(i, j, k)) {

                ans.push_back(i);
                ans.push_back(j);

                used[i] = true;
                used[j] = true;

                found = true;
                break;
            }
        }

        // Agar n odd hai, last ek city akeli reh sakti hai.
        if (!found) {
            int remaining = 0;

            for (int x = 1; x <= n; x++) {
                if (!used[x])
                    remaining++;
            }

            if (remaining == 1) {
                for (int x = 1; x <= n; x++) {
                    if (!used[x]) {
                        ans.push_back(x);
                        used[x] = true;
                        break;
                    }
                }
            }
            else {
                cout << -1 << '\n';
                return;
            }
        }
    }

    for (int x : ans)
        cout << x << ' ';

    cout << '\n';
}

int main() {
    fastio();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SLMNTRV)