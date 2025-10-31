#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int total = 1;
        int zeroCount = 0;
        for (int num : nums) {
            if (num != 0)
                total *= num;
            else
                zeroCount++;
        }

        int len = nums.size();
        vector<int> ans(len, total);

        if (zeroCount >= 2) {
            vector<int> ans(len, 0);
            return ans;
        }

        for (int i = 0; i < len; i++) {
            if (nums[i] != 0 && zeroCount == 1) {
                ans[i] = 0;
            } else if (nums[i] != 0 && zeroCount == 0) {
                ans[i] /= nums[i];
            }
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> ans = sol.productExceptSelf(nums);
    for (auto a : ans) {
        cout << a << ' ';
    }
    cout << endl;

    return 0;
}