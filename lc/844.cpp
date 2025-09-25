#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int countS = 0, countT = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            // cout << "i: " << i << endl;
            // cout << s << endl;
            if (s[i] == '#') {
                countS++;
                // cout << "# found" << endl;
                for (int j = i - 1; j >= 0; j--) {
                    // cout << "j: " << j << ", " << s[j] << endl;
                    if (s[j] != '#') {
                        // cout << "erase: " << s[i] << " & " << s[j] << endl;
                        s.erase(i, 1);
                        s.erase(j, 1);
                        countS--;
                        break;
                    }
                }
            }
        }
        if (countS > 0) {
            s.erase(0, countS);
        }

        for (int i = t.size() - 1; i >= 0; i--) {
            if (t[i] == '#') {
                countT++;
                for (int j = i - 1; j >= 0; j--) {
                    if (t[j] != '#') {
                        t.erase(i, 1);
                        t.erase(j, 1);
                        countT--;
                        break;
                    }
                }
            }
        }
        if (countT > 0) {
            t.erase(0, countT);
        }

        // cout << s << " " << t << endl;

        if (s != t) {
            return false;
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.backspaceCompare("y#fo##f", "y#f#o##f") << endl;

    return 0;
}