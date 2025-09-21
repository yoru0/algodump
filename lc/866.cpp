#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int primePalindrome(int n) {
        if (n >= 8 && n <= 11)
            return 11;
        for (int x = pow(10, (int)log10(n) / 2); x < 100000; ++x) {
            string s = to_string(x);
            string r(s.rbegin() + 1, s.rend());
            int y = stoi(s + r);
            if (y >= n && prime(y)) {
                return y;
            }
        }
        return -1;
    }

    bool prime(int num) {
        if (num < 2)
            return false;
        if (num == 2 || num == 3)
            return true;
        if (num % 2 == 0 || num % 3 == 0)
            return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }
        return true;
    }

    bool palindrome(int n) {
        string s = to_string(n);
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != s[len - i - 1])
                return false;
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    int ans = sol.primePalindrome(10000000);
    cout << ans << endl;

    return 0;
}