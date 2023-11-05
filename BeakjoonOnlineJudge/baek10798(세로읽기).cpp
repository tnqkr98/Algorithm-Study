#include <iostream>
using namespace std;
int main() {
	char a[5][15] = {0};
	for (int i = 0; i < 5; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size(); j++) {
			a[i][j] = s[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[j][i] != 0) cout << a[j][i];
		}
	}

	return 0;
}