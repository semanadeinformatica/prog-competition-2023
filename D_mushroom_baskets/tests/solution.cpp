#include <bits/stdc++.h>

using namespace std;

vector<int> weights;

// Being N the number of distinct types of mushrooms and wi the weight of a mushroom of type i
// The sum of the weights of all possible baskets is equal to 2^(n-1) * w1 + 2^(n-1) * w2 + ... 2^(n-1) * wn, since each type of mushroom appears in 2^(n - 1) baskets
// Check the sum of weights of all baskets that are under 200 grams (there WAY LESS baskets under 200 grams than baskets over 200 grams)
// The final answer is the difference between the sum of the weight all possible baskets and the sum of the weight of all baskets under 200 grams.
long long recurse(int idx, int currW) {
    if (currW + weights[idx] >= 200 || idx == (int) weights.size())
        return currW;
    
    return recurse(idx + 1, currW) + recurse(idx + 1, currW + weights[idx]);
}

int main() {
    int N; cin >> N;
    double total = 0.0;
    double exp = pow(2, N-1);

    for (int i = 0; i < N; i++) {
        int curr; cin >> curr;

        weights.push_back(curr);
        total += exp * (double) curr;
    }

    sort(weights.begin(), weights.end());

    cout << (long long) total - recurse(0, 0) << '\n';

    return 0;
}