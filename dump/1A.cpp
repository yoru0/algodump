    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        long long a, b, c; cin >> a >> b >> c;
        long long q = (a + c - 1) / c;
        long long w = (b + c - 1) / c;
        cout << q * w << endl;
        return 0;
    }