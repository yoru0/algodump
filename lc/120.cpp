#include <bits/stdc++.h>
using namespace std;

//   -1
//  2  3
// 1 -1 -3

class Solution {
public:
    int minimumTotal(vector<vector<int>> &triangle) {
        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j < (int)triangle[i].size(); j++) {
                triangle[i][j] +=
                    min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }
        return triangle[0][0];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<vector<int>> triangle = {{-1}, {2, 3}, {1, -1, -3}};
    cout << sol.minimumTotal(triangle) << endl;

    return 0;
}