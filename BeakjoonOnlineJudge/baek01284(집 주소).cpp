#include <iostream>
#include <string>
using namespace std;
int main() {
	while (1) {
		string s; cin >> s;
		int sum = 1;
		if (s[0] == '0') break;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] - '0' == 1) sum += 3;
			else if (s[i] - '0' == 0) sum += 5;
			else sum += 4;
		}
		cout << sum << endl;
	}
	return 0;
}