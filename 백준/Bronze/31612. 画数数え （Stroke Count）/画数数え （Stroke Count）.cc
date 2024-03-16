#include <iostream>
#include <map>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	map<char, int> m;
	m['i'] = 2;
	m['j'] = 2;
	m['o'] = 1;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += m[s[i]];
	}

	cout << sum;
	return 0;
}