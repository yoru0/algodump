#include <bits/stdc++.h>
using namespace std;
 
int main() {
    set<char> c;
    string str; cin >> str;
    for(auto i : str) {
        c.insert(i);
    }
    if(c.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    cout << endl;
    return 0;
}