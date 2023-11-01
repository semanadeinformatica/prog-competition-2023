#include <bits/stdc++.h>

using namespace std;

/* TEST GEN FOR H - SMASH BROWSER */

int main() {
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    auto get_rand = [&](int64_t l, int64_t r) {
        return uniform_int_distribution<int64_t>(l, r)(rng);
        };

    const int MAX_N = 1e6;
    const int MAX_H = 1e9;

    for (int test_case = 1; test_case <= 40; test_case++) {
        int N = get_rand(1, MAX_N);

        string dir = "t";
        if (test_case < 10) dir += "0";
        dir += to_string(test_case);

        string cmd = "mkdir -p " + dir;
        system(cmd.c_str());

        ofstream fout(dir + "/in");

        fout << N << "\n";

        fout << get_rand(1, MAX_H);
        for (int i = 1; i < N; i++) {
            fout << " " << get_rand(1, MAX_H);
        }

        fout.close();

        cmd = "./a < " + dir + "/in > " + dir + "/out";
        system(cmd.c_str());

        cout << "Generated test case " << test_case << '\n';
    }
}
