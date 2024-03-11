#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	string t = "";
	for (int i = 1; i <= 9; i++) {
		t.push_back('0' + i);
		if (t == s) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}