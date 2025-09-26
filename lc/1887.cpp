#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reductionOperations(vector<int> &nums) {
        int ans = 0;
        map<int, int> nMap;
        for (auto num : nums) {
            nMap[num]++;
        }

        int i = 0;
        for (auto num : nMap) {
            ans += num.second * i;
            i++;

            // cout << num.first << " -> " << num.second << endl;
        }

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3};
    cout << sol.reductionOperations(nums) << endl;

    return 0;
}