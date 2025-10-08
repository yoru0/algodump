#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> temp = {};
        for (auto c : s) {
            if (c == ')' && temp.size() > 0 && temp.top() == '(') {
                temp.pop();
            } else if (c == '}' && temp.size() > 0 && temp.top() == '{') {
                temp.pop();
            } else if (c == ']' && temp.size() > 0 && temp.top() == '[') {
                temp.pop();
            } else {
                temp.push(c);
            }
        }
        if (temp.size() > 0) {
            return false;
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.isValid("}") << endl;

    return 0;
}