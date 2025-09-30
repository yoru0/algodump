#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * AM -> 00:00:00 - 11:59:59
 * PM -> 12:00:00 - 23:59:59
 */
string timeConversion(string s) {
    int hour = atoi(s.substr(0, 2).c_str());
    string min = s.substr(3, 2);
    string sec = s.substr(6, 2);
    string last = s.substr(8, 2);

    if (last == "AM") {
        if (hour == 12)
            hour = 0;
    } else {
        if (hour != 12)
            hour += 12;
    }

    string hourr = to_string(hour);
    if (hourr.size() != 2) {
        hourr = "0" + hourr;
    }

    return hourr + ":" + min + ":" + sec;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
