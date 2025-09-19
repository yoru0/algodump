#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;

        vector<int> g(t + 1, 0);
        g[0] = 1;
        for (int k = 1; k <= min(t, 25); k++) {
            g[k] = 2;
        }
        for (int k = 26; k <= t; k++) {
            int v = g[k - 25] + g[k - 26];
            if (v >= MOD)
                v -= MOD;
            g[k] = v;
        }

        array<long long, 26> freq{};
        freq.fill(0);
        for (auto c : s) {
            int d = 'z' - c;
            freq[d]++;
        }

        long long ans = 0;
        for (int d = 0; d < 26; d++) {
            if (freq[d] == 0) {
                continue;
            }

            if (t <= d) {
                ans += freq[d];
            } else {
                ans = (ans + freq[d] * g[t - d]) % MOD;
            }
            if (ans >= MOD) {
                ans -= MOD;
            }
        }

        return (int)(ans % MOD);
    }
};

// int ans = 0;
//         int mod = 1e9 + 7;
//         map<char, long long> charMap;

//         for (auto ch : s) {
//             charMap[ch]++;
//         }
//         while (t--) {
//             map<char, long long> secondMap;

//             for (auto ch : charMap) {
//                 if (ch.first != 'z') {
//                     secondMap[ch.first + 1] =
//                         (secondMap[ch.first + 1] + ch.second) % mod;

//                 } else {
//                     secondMap['a'] = (secondMap['a'] + ch.second) % mod;
//                     secondMap['b'] = (secondMap['b'] + ch.second) % mod;
//                 }
//             }
//             charMap = secondMap;

//             // cout << "charmap:" << endl;
//             // for (auto i : charMap) {
//             //     cout << i.first << " " << i.second << endl;
//             // }
//             // cout << endl << endl;
//             // cout << "secondmap:" << endl;
//             // for (auto i : secondMap) {
//             //     cout << i.first << " " << i.second << endl;
//             // }
//         }

//         for (auto i : charMap) {
//             ans = (ans + i.second) % mod;
//         }

//         return int(ans);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    cout << sol.lengthAfterTransformations("jqktcurgdvlibczdsvnsg", 7517)
         << endl;

    return 0;
}