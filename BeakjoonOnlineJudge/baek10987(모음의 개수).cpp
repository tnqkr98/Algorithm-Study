#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e')n++;
	}
	cout << n;
	return 0;
}