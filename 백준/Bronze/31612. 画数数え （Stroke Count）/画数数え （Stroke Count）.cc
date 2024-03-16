#include <iostream>
#include <map>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	map<char, int> m;
	m['a'] = 1;
	m['b'] = 1;
	m['c'] = 1;
	m['d'] = 1;
	m['e'] = 1;
	m['f'] = 1;
	m['g'] = 1;
	m['h'] = 1;
	m['i'] = 2;
	m['j'] = 2;
	m['k'] = 1;
	m['l'] = 1;
	m['m'] = 1;
	m['n'] = 1;
	m['o'] = 1;
	m['p'] = 1;
	m['q'] = 1;
	m['r'] = 1;
	m['s'] = 1;
	m['t'] = 1;
	m['v'] = 1;
	m['w'] = 1;
	m['x'] = 1;
	m['y'] = 1;
	m['z'] = 1;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += m[s[i]];
	}

	cout << sum;
	return 0;
}