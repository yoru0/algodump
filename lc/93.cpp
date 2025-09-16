#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        vector<array<string, 4>> ips = possibleIpAddresses(s);

        for (auto ip : ips) {
            // cout << makeIpAddress(ip) << endl;
            bool ok = validateIPAddress(ip);
            if (ok) {
                ans.push_back(makeIpAddress(ip));
            }
        }

        return ans;
    }

    vector<array<string, 4>> possibleIpAddresses(string s) {
        vector<array<string, 4>> ips;
        int n = s.size();
        if (n < 4 || n > 12)
            return ips;

        for (int i = 1; i <= n - 3; ++i) {
            for (int j = i + 1; j <= n - 2; ++j) {
                for (int k = j + 1; k <= n - 1; ++k) {
                    ips.push_back({s.substr(0, i), s.substr(i, j - i),
                                   s.substr(j, k - j), s.substr(k, n - k)});
                }
            }
        }
        return ips;
    }

    bool validateIPAddress(array<string, 4> ip) {
        for (auto i : ip) {
            if (i.size() > 1 && i[0] == '0') {
                return false;
            }
            if (atoi(i.c_str()) > 255) {
                return false;
            }
        }
        return true;
    }

    string makeIpAddress(array<string, 4> s) {
        return s[0] + "." + s[1] + "." + s[2] + "." + s[3];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<string> ans = sol.restoreIpAddresses("101023");

    for (auto i : ans) {
        cout << i << endl;
    }

    return 0;
}