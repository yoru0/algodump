#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int count = 0;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		if(s[i] == '4' || s[i] == '7')
			count++;
	}
	if(count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";
	
	
	return 0;
}