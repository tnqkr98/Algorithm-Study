#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		char last = ' ';
		for (int j = 0; j < s.length(); j++) {
			if (last != s[j]) {
				cout << s[j];
				last = s[j];
			}
		}
		cout << endl;
	}
	return 0;
}