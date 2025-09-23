#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string line;
    getline(cin, line);

    vector<string> path;
    unordered_map<string, string> table;

    for (int i = 0; i < n; i++) {
        getline(cin, line);

        string inside = line.substr(1, line.size() - 2);

        if (inside[0] == '/') {
            path.pop_back();
        } else {
            stringstream ss(inside);
            string tag;
            ss >> tag;

            path.push_back(tag);

            string prefix;
            for (int j = 0; j < (int)path.size(); j++) {
                if (j)
                    prefix += ".";
                prefix += path[j];
            }

            string attr, eq, value;
            while (ss >> attr >> eq >> value) {
                value = value.substr(1, value.size() - 2);
                table[prefix + "~" + attr] = value;
            }
        }
    }

    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);
        if (table.count(query))
            cout << table[query] << '\n';
        else
            cout << "Not Found!\n";
    }

    return 0;
}