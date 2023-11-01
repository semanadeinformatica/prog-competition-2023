#include <bits/stdc++.h>

#define INF 1000000000

using namespace std;

// Find highest jumps greedily. For each building (left end of the bridge), process every building in front of it until you find one higher than the first one (right end of the bridge)
// Find the lowest building in between the first and last building that were chosen (max height from the bridge to the floor). 
// Start again from the last building of the bridge (the right end of the current bridge is not the left end of the next bridge).
// Repeat until all building have been processed
int get_max_jump(stack<int> &heights, stack<int> &reverse) {
    int ans = 0, first = -1, low = INF, jumps = 0;

    while (!heights.empty()) {
        if (heights.top() >= first) {
            if (jumps) {
                jumps = 0;
                ans = max(ans, first - low);
                low = 1000000000;
            }

            first = heights.top();
            reverse.push(heights.top());
            heights.pop();
        }
        else {
            low = min(low, heights.top());
            reverse.push(heights.top());
            heights.pop();
            jumps++;
        }
    }

    return ans;
}

int main() {
    stack<int> heights, reverse;

    int H, sol1, sol2;

    cin >> H;

    while (H--) {
        int curr; cin >> curr;
        
        heights.push(curr);
    }

    // Process building from left to right (the left end of the "building bridge" is never higher than the right end)
    sol1 = get_max_jump(heights, reverse);

    // Process building from right to left (the right end of the "building bridge" is never higher than the left end)
    sol2 = get_max_jump(reverse, heights);

    cout << max(sol1, sol2) << endl; 

    return 0;
}
