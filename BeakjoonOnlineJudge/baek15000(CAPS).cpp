#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	char d = 'a' - 'A';
	for (int i = 0; i < s.size(); i++) {
		cout << (char)(s[i] - d);
	}
	return 0;
}