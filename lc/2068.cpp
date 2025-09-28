#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> wordMap;
        for (auto c : word1) {
            wordMap[c]++;
        }
        for (auto c : word2) {
            wordMap[c]--;
        }
        for (auto m : wordMap) {
            if (m.second > 3 || m.second < -3) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.checkAlmostEquivalent("aaaa", "bccb") << endl;

    return 0;
}