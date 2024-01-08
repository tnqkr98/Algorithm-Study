#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ':') n++;
		if (s[i] == '_') n += 5;
		n++;
	}
	cout << n;
	return 0;
}