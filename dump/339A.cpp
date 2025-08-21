#include <bits/stdc++.h>
using namespace std;

int main() {
    string a; cin >> a;
    vector<int> num;
    for(auto i : a) {
        if(i != '+') num.push_back(i - '0');
    }
    sort(num.begin(), num.end());
    int n = num.size();
    for(int i = 0; i < n; i++) {
        cout << num[i];
        if(i != n - 1) cout << '+';
    }
    cout << endl;
    return 0;
}