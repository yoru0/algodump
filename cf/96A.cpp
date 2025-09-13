#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int count = 1;
	int len = s.length();
	for(int i = 0; i < len - 1; i++) {
		if(s[i] == s[i + 1])
			count++;
		else
			count = 1;
			
		if(count == 7) {
			break;
		}
	}
	if(count == 7)
		cout << "YES";
	else
		cout << "NO";
	
	
	return 0;
}