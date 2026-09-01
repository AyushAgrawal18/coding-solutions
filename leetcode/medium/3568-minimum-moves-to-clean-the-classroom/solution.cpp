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