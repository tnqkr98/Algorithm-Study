#include <iostream>
#include <string>
using namespace std;
int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s != "END") {
			for (int i = s.size() - 1; i >= 0; i--)
				cout << s[i];
			cout << endl;
		}
		else break;
	}
	return 0;
}