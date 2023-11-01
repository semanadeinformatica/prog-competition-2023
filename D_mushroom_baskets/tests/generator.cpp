#include <bits/stdc++.h>

using namespace std;

/* TEST GEN FOR J - VACUUM CLEANING */

int main() {
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    auto get_rand = [&](int64_t l, int64_t r) {
        return uniform_int_distribution<int64_t>(l, r)(rng);
        };

    const int MAX_N = 40;
    const int MIN_W = 50;
    const int MAX_W = 1000;

    for (int test_case = 1; test_case <= 40; test_case++) {
        int64_t N = get_rand(1, MAX_N);

        string dir = "t";
        if (test_case < 10) dir += "0";
        dir += to_string(test_case);

        string cmd = "mkdir -p " + dir;
        system(cmd.c_str());

        ofstream fout(dir + "/in");

        fout << N << "\n";
        fout << get_rand(1, N);

        for (int i = 1; i < N; i++) {
            int64_t w = get_rand(MIN_W, MAX_W);
            fout << ' ' << w;
        }

        fout << "\n";

        fout.close();

        cmd = "./a < " + dir + "/in > " + dir + "/out";
        system(cmd.c_str());

        cout << "Generated test case " << test_case << '\n';
    }
}
