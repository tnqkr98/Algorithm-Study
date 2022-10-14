#include <iostream>
using namespace std;
int main() {
	string a, b; cin >> a >> b;
	int sa =0, sb =0;
	for (auto c : a) {
		sa += c - '0';
	}
	for (auto c : b) {
		sb += c - '0';
	}
	if (sa * a.size() > sb * b.size()) cout << 1;
	else if ((sa * a.size() < sb * b.size())) cout << 2;
	else cout << 0;

	return 0;
}