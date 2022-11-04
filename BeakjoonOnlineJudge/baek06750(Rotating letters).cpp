#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	bool su = true;
	for (auto i : s) {
		if (i == 'I' ||
			i == 'O' ||
			i == 'S' ||
			i == 'H' ||
			i == 'Z' ||
			i == 'X' ||
			i == 'N') continue;
		else {
			su = false;
			break;
		}
	}
	if (su) cout << "YES";
	else cout << "NO";
	return 0;
}