#include <bits/stdc++.h>

using namespace std;

/* TEST GEN FOR C - DOOMBAS COLLIDING */

int main() {
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    const int64_t MAX_L = 1e16;
    const int64_t MAX_D = 1e4;

    for (int test_case = 1; test_case <= 40; test_case++) {
        int64_t local_max_l;
        if (test_case <= 5) local_max_l = 1e3;
        else if (test_case <= 10) local_max_l = 1e6;
        else if (test_case <= 20) local_max_l = 1e9;
        else local_max_l = MAX_L;

        int64_t local_l = rng() % local_max_l + 1;
        int64_t local_d = rng() % MAX_D + 1;

        string dir = "t";
        if (test_case < 10) dir += "0";
        dir += to_string(test_case);

        string cmd = "mkdir -p " + dir;
        system(cmd.c_str());

        ofstream fout(dir + "/in");

        fout << local_l << ' ' << local_d << '\n';

        for (int64_t i = 0; i < local_d; i++) {
            int64_t x = rng() % local_l + 1;
            int d = rng() % 2;
            fout << x << ' ' << d << '\n';
        }

        fout.close();

        cmd = "./a < " + dir + "/in > " + dir + "/out";
        system(cmd.c_str());

        cout << "Generated test case " << test_case << '\n';
    }
}
