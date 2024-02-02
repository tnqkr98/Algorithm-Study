#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	int a=0, b=0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			a++; b++;
		}
		else if (s[i] == 'y')  b++;
	}
	cout << a << " " << b;
	return 0;
}