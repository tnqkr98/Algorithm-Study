#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int num = 1, c = 0;
	while (s.size() > 1) {
		num = 1;
		c += 1;
		for (int i = 0; i < s.size(); i++) {
			num *= s[i] - '0';
		}
		s = to_string(num);
	}
	cout << c;
	return 0;
}