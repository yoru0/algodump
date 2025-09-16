#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> counter;
        for (auto i : sentence) {
            counter[i]++;
        }
        if (counter.size() < 26) {
            return false;
        }

        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.checkIfPangram("thequickbrownfoxjumpsoverthelazydog") << endl;

    return 0;
}