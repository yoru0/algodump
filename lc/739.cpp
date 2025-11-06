#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        int len = temperatures.size();
        stack<pair<int, int>> stk;
        vector<int> ans(len, 0);

        for (int i = 0; i < len; i++) {

            while (!stk.empty() && stk.top().first < temperatures[i]) {
                ans[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({temperatures[i], i});

            // cout << stk.top().first << " " << stk.top().second << endl;
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> temperatures = {30, 40, 50, 60};
    vector<int> ans = sol.dailyTemperatures(temperatures);

    for (auto a : ans) {
        cout << a << ' ';
    }
    cout << endl;

    return 0;
}