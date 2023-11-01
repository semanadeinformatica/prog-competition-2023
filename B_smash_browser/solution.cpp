#include <bits/stdc++.h>
using namespace std;


void solve() {
    int64_t LH, LD, BH, BD, C, H, D;
    cin >> LH >> LD >> BH >> BD >> C >> D >> H;

    // It is useful to spend all coins
    // So we should consider every possibility to spend the coins
    for (int64_t i = 0; i <= C; i++) {
        // Health and damage after potions
        int64_t health = LH + i * H;
        int64_t damage = LD + (C - i) * D;

        // Calculate hits Lario needs to defeat Browser
        // If they are less or equal to the hits Browser needs to defeat Lario
        // Then Lario wins (if equal Lario wins because he goes first)
        int64_t lario_hits = BH / damage + (BH % damage != 0);
        int64_t browser_hits = health / BD + (health % BD != 0);
        
        if (lario_hits <= browser_hits) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}


int main() {
    cin.tie(0)->sync_with_stdio(0);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}