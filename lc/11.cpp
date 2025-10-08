#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int i = 0, j = height.size() - 1;
        int area = 0;

        while (i < j) {
            int low = min(height[i], height[j]);
            int temp = low * (j - i);

            area = max(area, temp);


            if (low == height[i]) {
                i++;

            } else if (low == height[j]) {
                j--;
            }

            // cout << "area : " << area << endl;
        }
        return area;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << sol.maxArea(height) << endl;

    return 0;
}