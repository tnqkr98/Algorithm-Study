#include <iostream>
using namespace std;
//#include <stdio.h>
//#pragma warning(disable:4496)
int main() {
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') cout << '4';
		else if (s[i] == 'e') cout << '3';
		else if (s[i] == 'i') cout << '1';
		else if (s[i] == 'o') cout << '0';
		else if (s[i] == 's') cout << '5';
		else cout << s[i];
	}
	return 0;
}