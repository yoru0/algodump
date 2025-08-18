#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        bool flag = true;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> minimal(n);
        int plus = 1;
        for(int i = 0; i <= (n-1)/2; i++) {
            minimal[i] = 2 * n - plus;
            minimal[n-1-i] = minimal[i];
            plus += 2;
        }

        // for(auto a : minimal) {
        //     cout << a << ' ';
        // }
        // cout << endl;

        for(int i = 0; i < n; i++) {
            if(a[i] < minimal[i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "yes" : "no") << endl;
    }
    
    return 0;
}