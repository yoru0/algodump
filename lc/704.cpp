#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1, mid = (left + right) / 2;

        while (left <= right) {
            if (nums[mid] < target) {
                left = mid + 1;
                mid = (left + right) / 2;
            } else if (nums[mid] > target) {
                right = mid - 1;
                mid = (left + right) / 2;
            } else
                return mid;
        }

        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << sol.search(nums, 2) << endl;

    return 0;
}