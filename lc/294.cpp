#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> chunks;
        string curr;
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                counts.push(num);
                chunks.push(curr);
                num = 0;
                curr.clear();
            } else if (c == ']') {
                int k = counts.top();
                counts.pop();
                string prefix = chunks.top();
                chunks.pop();
                string repeated;
                repeated.reserve(curr.size() * k);
                for (int i = 0; i < k; ++i)
                    repeated += curr;
                curr = prefix + repeated;
            } else {
                curr += c;
            }
        }
        return curr;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.decodeString("3[a]2[bc]") << endl;

    return 0;
}