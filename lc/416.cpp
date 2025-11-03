#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if (total % 2 == 1)
            return false;

        int target = total / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (auto n : nums) {
            for (int i = target; i >= n; i--) {
                if (dp[i])
                    continue;
                if (dp[i - n])
                    dp[i] = true;
                if (dp[target])
                    return true;
            }
        }

        return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 5, 11, 5};
    cout << sol.canPartition(nums) << endl;

    return 0;
}