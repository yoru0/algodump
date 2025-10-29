#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int> &nums) {
//         unordered_map<int, int> m;
//         for (auto num : nums) {
//             m[num]++;
//             if (m[num] == 2) {
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        return nums.size() != seen.size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << sol.containsDuplicate(nums) << endl;

    return 0;
}