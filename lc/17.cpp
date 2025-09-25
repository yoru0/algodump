#include <bits/stdc++.h>
using namespace std;

// 2 3 4
// 3 3 3

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }

        vector<string> tele = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        ans.push_back("");
        for (auto d : digits) {
            vector<string> temp;
            for (auto t : tele[d - '0']) {
                for (auto c : ans) {
                    temp.push_back(c + t);
                }
            }
            ans.clear();
            ans = temp;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<string> ans = sol.letterCombinations("23");
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}