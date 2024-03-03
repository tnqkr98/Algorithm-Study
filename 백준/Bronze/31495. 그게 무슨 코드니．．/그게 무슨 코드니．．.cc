#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; getline(cin,s);
	if (s.length() < 2) {
		cout << "CE";
		return 0;
	}
	if (s[0] == '"' && s[s.length() - 1] == '"') {
		if (s.length() == 2) {
			cout << "CE";
			return 0;
		}
		cout << s.substr(1,s.length()-2);
	}
	else {
		cout << "CE";
	}
	return 0;
}