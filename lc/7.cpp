#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;

        while (x != 0) {
            int digit = x % 10;

            if ((res > INT_MAX / 10) || (res < INT_MIN / 10)) {
                return 0;
            }

            res = res * 10 + digit;
            x /= 10;
        }

        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.reverse(-2147483648) << endl;

    return 0;
}