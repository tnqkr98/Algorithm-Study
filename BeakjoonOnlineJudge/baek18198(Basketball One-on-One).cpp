#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string s; cin >> s;
	int a = 0, b = 0;
	for (int i=0;i<s.size();i++){
		if (s[i] == 'A') a += s[i + 1] - '0';
		else if (s[i] == 'B') b += s[i + 1] - '0';
		if ((a >= 11 || b >= 11) && abs(a - b) >= 2) {
			if (a > b)cout << 'A';
			else cout << 'B';
			break;
		}
	}
	return 0;
}