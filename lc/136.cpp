#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
        map<int, int> counter;
        for (auto i : nums) {
            counter[i]++;
        }
        for (auto i : counter) {
            if (i.second == 1) {
                return i.first;
            }
        }
        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 2, 1};
    Solution sol;
    int ans = sol.singleNumber(nums);

    cout << ans << endl;

    return 0;
}
