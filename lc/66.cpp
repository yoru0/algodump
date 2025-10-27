#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        int consecutiveNine = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (digits[i] == 9)
                consecutiveNine++;
            else
                break;
        }

        // cout << consecutiveNine << endl;

        if (consecutiveNine == len) {
            // cout << "digit 0: " << digits[0] << endl;
            digits[0] = 1;
            for (int i = 1; i < len; i++) {
                digits[i] = 0;
            }
            digits.push_back(0);
            return digits;
        }

        for (int i = len - 1; i > len - consecutiveNine - 2; i--) {
            digits[i] += 1;
            digits[i] %= 10;
        }
        return digits;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> digits = {9};
    vector<int> ans = sol.plusOne(digits);

    for (auto a : ans) {
        cout << a << ' ';
    }
    cout << endl;

    return 0;
}