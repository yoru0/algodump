#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int> &nums) {
        long long res = 0, consecutive = 0;
        for (auto n : nums) {
            if (n == 0) {
                consecutive++;
                res += consecutive;
            } else {
                consecutive = 0;
            }
        }

        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {0, 0, 0, 2, 0, 0};
    cout << sol.zeroFilledSubarray(nums) << endl;

    return 0;
}