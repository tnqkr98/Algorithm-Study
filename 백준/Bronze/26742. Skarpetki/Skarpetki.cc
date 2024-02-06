#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	int b = 0, c = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'B') b++;
		else if (s[i] == 'C') c++;
	}
	cout << b / 2 + c / 2;
	return 0;
}