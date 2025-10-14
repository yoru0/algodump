#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> counter;
        int n = s.size();
        int maxLen = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            if (counter.count(s[right]) == 0 || counter[s[right]] < left) {
                counter[s[right]] = right;
                maxLen = max(maxLen, right - left + 1);
            } else {
                left = counter[s[right]] + 1;
                counter[s[right]] = right;
            }
        }

        return maxLen;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.lengthOfLongestSubstring("tmmzuxt") << endl;

    return 0;
}