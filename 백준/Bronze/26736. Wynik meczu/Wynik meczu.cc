#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') a++;
		else if (s[i] == 'B') b++;
	}
	cout << a << " : " << b;

	return 0;
}