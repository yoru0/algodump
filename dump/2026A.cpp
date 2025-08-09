#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string a; cin >> a;
        int z = 0;
        for(char c : a) {
            if(c == '1') z++;
        }
        cout << z << endl;
    }
    
    return 0;
}