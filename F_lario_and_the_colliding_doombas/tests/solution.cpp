#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ll L, G;
    cin >> L >> G;

    ll ans = 0;

    for (ll i = 0; i < G; i++) {
        ll x, d;
        cin >> x >> d;

        if (d == 0) ans = max(ans, x);
        else ans = max(ans, L - x);
    }

    cout << ans << endl;
}