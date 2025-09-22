#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSum(vector<int> &nums) {
        map<int, vector<int>> mNums;

        for (auto num : nums) {
            string s = to_string(num);
            int max = 0;
            for (auto digit : s) {
                if (max < (digit - '0')) {
                    max = (digit - '0');
                }
            }
            mNums[max].push_back(num);
        }

        for (auto it = mNums.rbegin(); it != mNums.rend(); ++it) {
            cout << it->first << " -> ";
            for (int x : it->second)
                cout << x << " ";
            cout << "\n";
        }

        int ans = -1;
        for (auto it = mNums.rbegin(); it != mNums.rend(); ++it) {
            if (it->second.size() >= 2) {
                sort(it->second.rbegin(), it->second.rend());
                int temp = it->second[0] + it->second[1];

                if (temp > ans) {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {84, 91, 18, 59, 27, 9, 81, 33, 17, 58};
    cout << sol.maxSum(nums) << endl;

    return 0;
}