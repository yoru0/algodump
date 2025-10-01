#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int> &nums) {
        unordered_map<int, int> m;
        int ans = 0;
        for (auto i : nums) {
            m[i]++;
        }
        auto maxFreq =
            max_element(m.begin(), m.end(), [](const auto &p1, const auto &p2) {
                return p1.second < p2.second;
            });

        for (auto i : m) {
            if (i.second == maxFreq->second) {
                ans += i.second;
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << sol.maxFrequencyElements(nums) << endl;

    return 0;
}