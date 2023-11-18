#include <iostream>
using namespace std;
int main() {
	string S; cin >> S;
	int m = 0, o = 0, b = 0, i = 0, s = 0;
	for (int j = 0; j < S.size(); j++) {
		if (S[j] == 'M') m += 1;
		if (S[j] == 'O') o += 1;
		if (S[j] == 'B') b += 1;
		if (S[j] == 'I') i += 1;
		if (S[j] == 'S') s += 1;
	}
	int res = m * o * b * i * s;
	if (res == 0) cout << "NO";
	else cout << "YES";
	return 0;
}