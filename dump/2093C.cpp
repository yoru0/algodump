#include <bits/stdc++.h>
using namespace std;

bool prime(int z) {
    if(z < 2) return false;
    if(z == 2) return true;
    if(z % 2 == 0) return false;
    int lim = sqrt(z);
    for(int i = 3; i <= lim; i += 2) {
        if(z % i == 0) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    
    int consOne[8] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111};

    while(t--) {
        int x, k; cin >> x >> k;
        bool ok;

        if(k == 1) {
            ok = prime(x);
        }
        else {
            if(x == 1) {
                ok = prime(consOne[k]);
            }
            else {
                ok = false;
            }
        }

        cout << (ok ? "yes\n" : "no\n");
    }

    return 0;
}