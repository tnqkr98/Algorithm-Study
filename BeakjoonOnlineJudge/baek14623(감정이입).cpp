#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	long long na = 0, nb = 0, num = 1, p;
	for (int i = a.size() - 1; i >= 0; i--) {
		if (a[i] == '1') na += num;
		num *= 2;
	}
	num = 1;
	for (int i = b.size() - 1; i >= 0; i--) {
		if (b[i] == '1') nb += num;
		num *= 2;
	}
	p = na * nb;
	string s;
	while (p != 0) {
		if (p % 2 == 0) s.push_back('0');
		else s.push_back('1');
		p /= 2;
	}
	for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
	return 0;
}