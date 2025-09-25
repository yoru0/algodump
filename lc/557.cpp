#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        auto token = split(s, " ");
        int len = token.size();
        for (int i = 0; i < len; i++) {
            reverse(token[i].begin(), token[i].end());
            if (i == len - 1)
                res += token[i];
            else
                res += token[i] + " ";
        }

        return res;
    }

    vector<string> split(string s, string delimiter) {
        size_t pos_start = 0, pos_end, delim_len = delimiter.length();
        string token;
        vector<string> res;

        while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
            token = s.substr(pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            res.push_back(token);
        }

        res.push_back(s.substr(pos_start));
        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.reverseWords("Let's take LeetCode contest") << endl;

    return 0;
}