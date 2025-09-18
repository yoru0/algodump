#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string> &operations) {
        int ans = 0;
        for (auto i : operations) {
            if (i[1] == '+') {
                ans++;
            } else {
                ans--;
            }
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> input = {"++X","++X","X++"};

    Solution sol;
    cout << sol.finalValueAfterOperations(input) << endl;

    return 0;
}