# Minimum Moves to Clean the Classroom

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` grid `classroom` where a student volunteer is tasked with cleaning up litter scattered around the room. Each cell in the grid is one of the following:

- 'S': Starting position of the student
- 'L': Litter that must be collected (once collected, the cell becomes empty)
- 'R': Reset area that restores the student's energy to full capacity, regardless of their current energy level (can be used multiple times)
- 'X': Obstacle the student cannot pass through
- '.': Empty space

You are also given an integer `energy`, representing the student's maximum energy capacity. The student starts with this energy from the starting position `'S'`.

Each move to an adjacent cell (up, down, left, or right) costs 1 unit of energy. If the energy reaches 0, the student can only continue if they are on a reset area `'R'`, which resets the energy to its  **maximum**  capacity `energy`.

Return the  **minimum**  number of moves required to collect all litter items, or `-1` if it's impossible.

 

 **Example 1:** 

 **Input:**  classroom = ["S.", "XL"], energy = 2

 **Output:**  2

 **Explanation:** 

- The student starts at cell (0, 0) with 2 units of energy.
- Since cell (1, 0) contains an obstacle 'X', the student cannot move directly downward.
- A valid sequence of moves to collect all litter is as follows: Move 1: From (0, 0) → (0, 1) with 1 unit of energy and 1 unit remaining. Move 2: From (0, 1) → (1, 1) to collect the litter 'L'.
- The student collects all the litter using 2 moves. Thus, the output is 2.

 **Example 2:** 

 **Input:**  classroom = ["LS", "RL"], energy = 4

 **Output:**  3

 **Explanation:** 

- The student starts at cell (0, 1) with 4 units of energy.
- A valid sequence of moves to collect all litter is as follows: Move 1: From (0, 1) → (0, 0) to collect the first litter 'L' with 1 unit of energy used and 3 units remaining. Move 2: From (0, 0) → (1, 0) to 'R' to reset and restore energy back to 4. Move 3: From (1, 0) → (1, 1) to collect the second litter 'L'.
- The student collects all the litter using 3 moves. Thus, the output is 3.

 **Example 3:** 

 **Input:**  classroom = ["L.S", "RXL"], energy = 3

 **Output:**  -1

 **Explanation:** 

No valid path collects all `'L'`.

 

 **Constraints:** 

- 1 <= m == classroom.length <= 20
- 1 <= n == classroom[i].length <= 20
- classroom[i][j] is one of 'S', 'L', 'R', 'X', or '.'
- 1 <= energy <= 50
- There is exactly one 'S' in the grid.
- There are at most 10 'L' cells in the grid.

## Solution

**Language:** C++  
**Runtime:** 714 ms  
**Memory:** 102.8 MB  
**Submitted:** 2026-09-01T18:46:55.311Z  

```cpp
class Solution {
public:
    int minMoves(vector<string>& a, int energy) {
        int n = a.size(), m = a[0].size();
        int si = -1, sj = -1;

        vector<vector<int>> lilyIndex(n, vector<int>(m, -1));
        int totalL = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 'S') { si = i; sj = j; }
                if (a[i][j] == 'L') lilyIndex[i][j] = totalL++;
            }

        if (totalL == 0) return 0;
        // Note: bitmask state space assumes totalL is small (say <= 20).
        // For larger totalL a different algorithm (e.g. TSP-style DP
        // over lily positions) would be needed.

        int fullMask = (1 << totalL) - 1;
        int maxEnergy = energy;

        auto encode = [&](int i, int j, int rem, int mask) -> long long {
            return (((long long)i * m + j) * (maxEnergy + 1) + rem)
                     * (fullMask + 1) + mask;
        };

        unordered_set<long long> visited;
        queue<tuple<int,int,int,int>> q; // i, j, rem, mask

        q.push({si, sj, energy, 0});
        visited.insert(encode(si, sj, energy, 0));

        static const int dx[4] = {-1, 1, 0, 0};
        static const int dy[4] = {0, 0, 1, -1};

        int moves = 0;
        while (!q.empty()) {
            int sz = q.size();
            for (int t = 0; t < sz; t++) {
                auto [i, j, rem, mask] = q.front();
                q.pop();

                if (mask == fullMask) return moves;
                if (rem == 0) continue;

                for (int d = 0; d < 4; d++) {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni < 0 || ni >= n || nj < 0 || nj >= m) continue;

                    char c = a[ni][nj];
                    int nrem = rem, nmask = mask;

                    if (c == '.' || c == 'S') {
                        nrem = rem - 1;
                    } else if (c == 'L') {
                        nrem = rem - 1;
                        nmask = mask | (1 << lilyIndex[ni][nj]);
                    } else if (c == 'R') {
                        nrem = maxEnergy;
                    } else {
                        continue; // impassable, e.g. 'X'
                    }

                    long long key = encode(ni, nj, nrem, nmask);
                    if (visited.count(key)) continue;
                    visited.insert(key);

                    if (nmask == fullMask) return moves + 1;
                    q.push({ni, nj, nrem, nmask});
                }
            }
            moves++;
        }

        return -1; // unreachable
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-moves-to-clean-the-classroom/)