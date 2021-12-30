#include <string>
#include <iostream>
using namespace std;
int ispal1(string s) {
	int res = 0,f=0,b=s.size()-1;
	while (f < b) {
		if (s[f] != s[b] && res == 0) {
			res++;
			if (s[f + 1] == s[b]) f++;
			else if (s[b - 1] == s[f]) b--;
			else return 2;
		}
		else if (s[f] != s[b] && res == 1)
			return 2;
		f++;
		b--;
	}
	return res;
}
int ispal2(string s) {
	int res = 0, f = 0, b = s.size() - 1;
	while (f < b) {
		if (s[f] != s[b] && res == 0) {
			res++;
			if (s[b - 1] == s[f])b--;
			else if (s[f + 1] == s[b])f++;
			else return 2;
		}
		else if (s[f] != s[b] && res == 1)
			return 2;
		f++;
		b--;
	}
	return res;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int a, b;
		a = ispal1(s);
		if (a == 0) {
			cout << 0 << endl;
			continue;
		}
		else {
			b = ispal2(s);
			if (a == b) cout << a << endl;
			else cout << 1 << endl;
		}
	}
	return 0;
}