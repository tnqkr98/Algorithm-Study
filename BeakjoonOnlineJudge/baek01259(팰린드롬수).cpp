#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int i;
	while (1) {
		cin >> s;
		if (!s.compare("0"))
			break;
		for (i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - i - 1]) {
				cout << "no"<<endl;
				break;
			}
		}
		if (i == s.size() / 2)
			cout << "yes" << endl;
	}
	return 0;
}