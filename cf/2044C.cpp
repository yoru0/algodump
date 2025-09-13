#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, a, b, c; cin >> m >> a >> b >> c;
        int ans = 0, row1 = m, row2 = m;

        if(row1 >= a) {
            row1 -= a;
            ans += a;
        }
        else {
            ans += row1;
            row1 = 0;
        }

        if(row2 >= b) {
            row2 -= b;
            ans += b;
        }
        else {
            ans += row2;
            row2 = 0;
        }

        if((row1 + row2) >= c) {
            ans += c;
        }
        else {
            ans += (row1 + row2);
        }

        cout << ans << endl;
    }

    return 0;
}