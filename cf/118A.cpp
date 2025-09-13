#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    for(char c : s) {
        c = c | 0x20;
        if(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        }
        else {
            cout << '.' << c;
        }
    }
    cout << '\n';

    return 0;
}