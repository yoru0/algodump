#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);

        int i = 0, j = y.size() - 1;
        while (i < j) {
            if (y[i] != y[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.isPalindrome(121) << endl;

    return 0;
}