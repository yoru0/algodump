#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        list<int> ans;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 4; j++) {
                char c; cin >> c;
                if(c == '#') {
                    ans.push_front(j + 1);
                }
            }
        }
        for(auto a : ans) {
            cout << a << ' ';
        }
        cout << '\n';
    }

    return 0;
}