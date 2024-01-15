#include <iostream>
#include <map>
using namespace std;
int main() {
	map<char, int> m; 
	int sum = 0;
	m['K'] = 0; m['k'] = 0;
	m['P'] = 1; m['p'] = -1;
	m['N'] = 3; m['n'] = -3;
	m['B'] = 3; m['b'] = -3;
	m['R'] = 5; m['r'] = -5;
	m['Q'] = 9; m['q'] = -9;
	for (int i = 0; i < 8; i++) {
		string s; cin >> s;
		for (int j = 0; j < 8; j++) {
			if (s[j] == '.') continue;
			sum += m[s[j]];
		}
	}
	cout << sum;
	return 0;
}