#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') cout << (char)('A' + (s[i] - 'a'));
		else cout << (char)('a' + (s[i] - 'A'));
	}


	return 0;
}