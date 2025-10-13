#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> p;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            p[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int sisa = target - nums[i];
            if (p.count(sisa) && p[sisa] != i) {
                return {i, p[sisa]};
            }
        }

        return {};
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> ans = sol.twoSum(nums, target);
    for (auto a : ans) {
        cout << a << endl;
    }

    return 0;
}