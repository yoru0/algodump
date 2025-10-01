#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLines(vector<vector<int>> &stockPrices) {
        sort(stockPrices.begin(), stockPrices.end());
        // for (auto i : stockPrices) {
        //     for (auto j : i) {
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }

        int ans = 1;
        int len = stockPrices.size();
        if (len <= 1)
            return 0;

        long double ratio = (long double)(stockPrices[0][1] - stockPrices[1][1]) /
                       (long double)(stockPrices[0][0] - stockPrices[1][0]);

        for (int i = 1; i < len - 1; i++) {
            long double currRatio =
                (long double)(stockPrices[i][1] - stockPrices[i + 1][1]) /
                (long double)(stockPrices[i][0] - stockPrices[i + 1][0]);
            // cout << "stock: " << stockPrices[i][0] << " "
            //      << stockPrices[i][1] << endl;
            // cout << "ratio " << ratio << ", currRatio " << currRatio << endl;

            if (currRatio == ratio)
                continue;

            ans++;
            ratio = currRatio;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<vector<int>> stockPrices = {
        {1, 1}, {500000000, 499999999}, {1000000000, 999999998}};
    cout << sol.minimumLines(stockPrices) << endl;

    return 0;
}