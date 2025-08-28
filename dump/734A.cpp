#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int a = 0, d = 0;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		if(s[i] == 'A')
			a++;
		else
			d++;
	}
	if(a > d)
		cout << "Anton";
	else if(d > a)
		cout << "Danik";
	else
		cout << "Friendship";
	
	
	return 0;
}