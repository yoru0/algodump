#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitNum(int num) {
        int ans = 0;
        string num1, num2;

        string s = to_string(num);
        sort(s.begin(), s.end());
        int len = s.size();

        for (int i = 0; i < len; i++) {
            if (i % 2 == 0) {
                num1 += s[i];
            } else {
                num2 += s[i];
            }
        }
        ans = atoi(num1.c_str()) + atoi(num2.c_str());

        // cout << num1 << ' ' << num2 << endl;

        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    int ans = sol.splitNum(2578);
    cout << ans << endl;

    return 0;
}