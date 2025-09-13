#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        int a[2], b[2]; cin >> a[0] >> a[1] >> b[0] >> b[1];
        
        int count = 0;
        if(a[0] > b[0] && a[1] > b[1])
            count++;
        else if(a[0] == b[0] && a[1] > b[1])
            count++;
        else if(a[0] > b[0] && a[1] == b[1])
            count++;

        if(a[0] > b[1] && a[1] > b[0])
            count++;
        else if(a[0] == b[1] && a[1] > b[0])
            count++;
        else if(a[0] > b[1] && a[1] == b[0])
            count++;

        cout << count * 2 << endl;
    }
 
    return 0;
}



// 10 10 1 1 -> 4

// 1 1 10 10 -> 0

// 10 1 10 1 -> 0

// 10 1 9 1

// 1 1 1 1 -> 0

// 1 10 1 1 -> 4

// 1 1 10 1 -> 0

// 3 8 2 6 -> 2

// 1 2 1 1