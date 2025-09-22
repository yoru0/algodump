#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int lowLen = to_string(low).size();
        int highLen = to_string(high).size();

        for (int i = lowLen; i <= highLen; i++) {
            vector<int> numbers = slideNumber(i);

            for (auto num : numbers) {
                if (num >= low && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }

    vector<int> slideNumber(int len) {
        const vector<char> digits = {'1', '2', '3', '4', '5',
                                     '6', '7', '8', '9'};
        vector<int> numbers;

        for (int i = 0; i < 10 - len; i++) {
            string temp;
            for (int j = i; j < len + i; j++) {
                temp += digits[j];
            }
            numbers.push_back(stoi(temp));
        }
        return numbers;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> ans = sol.sequentialDigits(1000, 1000000000);
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}