#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	while (1) {
		string s;
		getline(cin, s);
		if (s[0] == '*' && s[1] == '*' && s[2] == '*' && s.size() == 3) break;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}