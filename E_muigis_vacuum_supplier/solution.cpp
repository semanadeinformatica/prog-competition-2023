#include <bits/stdc++.h>

using namespace std;

#define INF 100000000

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vii> viii;

int main() {
    int C; cin >> C;

    viii memo(2, vii(C, vi(2, -INF)));
    vector<string> floor(2);

    for (int i = 0; i < 2; i++) {
        string tmp; cin >> tmp;
        floor[i] = tmp;
    }

    memo[0][0][0] = 0;
    memo[0][0][floor[1][0] == '1'] = floor[1][0] == '1';

    for (int col = 0; col < C - 1; col++) {
        for (int row = 0; row < 2; row++) {
            int sameRowDirty = floor[row][col + 1] == '1';
            int diffRowDirty = floor[1 - row][col + 1] == '1';

            memo[1 - row][col + 1][0] = max(memo[1 - row][col + 1][0], memo[row][col][1] + diffRowDirty);
            memo[row][col + 1][diffRowDirty] = max(memo[row][col + 1][diffRowDirty], memo[row][col][0] + sameRowDirty + diffRowDirty);
            memo[row][col + 1][0] = max(memo[row][col + 1][0], memo[row][col][0] + sameRowDirty);
        }
    }

    cout << max({memo[0][C - 1][0], memo[0][C - 1][1], memo[1][C - 1][0], memo[1][C - 1][1]}) << '\n';

    return 0;
}