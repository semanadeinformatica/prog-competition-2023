#include <bits/stdc++.h>

using namespace std;

/* TEST GEN FOR H - SMASH BROWSER */

int main() {
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    auto get_rand = [&](int64_t l, int64_t r) {
        return uniform_int_distribution<int64_t>(l, r)(rng);
        };
    const int64_t MAX_T = 100;
    const int64_t MAX_LH = 1e15, MAX_BH = 1e15;
    const int64_t MAX_LD = 1e9, MAX_BD = 1e9;
    const int64_t MAX_C = 1e5, MAX_H = 1e9, MAX_D = 1e9;

    for (int test_case = 1; test_case <= 40; test_case++) {
        int64_t T = get_rand(1, MAX_T);

        string dir = "t";
        if (test_case < 10) dir += "0";
        dir += to_string(test_case);

        string cmd = "mkdir -p " + dir;
        system(cmd.c_str());

        ofstream fout(dir + "/in");

        fout << T << "\n";

        while (T--) {
            int64_t LH = get_rand(1, MAX_LH);
            int64_t LD = get_rand(1, MAX_LD);
            int64_t BH = get_rand(1, MAX_BH);
            int64_t BD = get_rand(1, MAX_BD);
            int64_t C = test_case % 5 == 0 ? 0 : get_rand(0, MAX_C);
            int64_t H = get_rand(1, MAX_H);
            int64_t D = get_rand(1, MAX_D);

            fout << LH << " " << LD << '\n';
            fout << BH << " " << BD << '\n';
            fout << C << " " << H << " " << D << '\n';

        }

        fout.close();

        cmd = "./a < " + dir + "/in > " + dir + "/out";
        system(cmd.c_str());

        cout << "Generated test case " << test_case << '\n';
    }
}
