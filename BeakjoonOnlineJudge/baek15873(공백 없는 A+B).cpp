#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	if (s[1] == '0') cout << 10 + stoi(s.substr(2));
	else cout << (s[0] - '0') + stoi(s.substr(1));
	return 0;
}