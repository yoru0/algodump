#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
    map<int, string> numbers = {
        {1, "one"},        {2, "two"},       {3, "three"},     {4, "four"},
        {5, "five"},       {6, "six"},       {7, "seven"},     {8, "eight"},
        {9, "nine"},       {10, "ten"},      {11, "eleven"},   {12, "twelve"},
        {13, "thirteen"},  {14, "fourteen"}, {15, "fifteen"},  {16, "sixteen"},
        {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {20, "twenty"},
        {30, "thirty"}};

    string ans;

    if (m == 0) {
        ans = numbers[h] + " o' clock";
    } else if (m == 15) {
        ans = "quarter past " + numbers[h];
    } else if (m == 30) {
        ans = "half past " + numbers[h];
    } else if (m == 45) {
        ans = "quarter to " + numbers[(h % 12) + 1];
    } else if (m == 1) {
        ans = "one minute past " + numbers[h];
    } else if (m <= 30) {
        if (m <= 20) {
            ans = numbers[m] + " minutes past " + numbers[h];
        } else {
            ans = "twenty " + numbers[m - 20] + " minutes past " + numbers[h];
        }
    } else {
        int remaining = 60 - m;
        int nextHour = (h % 12) + 1;

        if (remaining <= 20) {
            ans = numbers[remaining] + " minutes to " + numbers[nextHour];
        } else {
            ans = "twenty " + numbers[remaining - 20] + " minutes to " +
                  numbers[nextHour];
        }
    }

    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
