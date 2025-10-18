#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
//         double median;
//         nums1.insert(nums1.end(), nums2.begin(), nums2.end());
//         sort(nums1.begin(), nums1.end());

//         int n = nums1.size();

//         if (n % 2 == 0) {
//             n /= 2;
//             median = (double)(nums1[n - 1] + nums1[n]) / 2.0;
//         } else {
//             median = (double)nums1[n / 2];
//         }

//         return median;
//     }
// };

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        
    }
};



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution sol;
    cout << sol.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}