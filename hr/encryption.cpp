#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int len = (int)s.size();

    double rt = sqrt((double)len);
    int row = (int)floor(rt);
    int col = (int)ceil(rt);
    if (row * col < len)
        row++;

    string ans = "";
    for (int i = 0; i < col; i++) {
        for (int j = i; j < len; j += col) {
            ans += s[j];
        }
        ans += " ";
    }

    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
