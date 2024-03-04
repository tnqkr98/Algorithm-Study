#include <iostream>
#include <map>
using namespace std;
int main() {
	map<char, char> m[3];
	m[1]['d'] = 'q';
	m[1]['b'] = 'p';
	m[1]['q'] = 'd';
	m[1]['p'] = 'b';

	m[2]['d'] = 'b';
	m[2]['b'] = 'd';
	m[2]['q'] = 'p';
	m[2]['p'] = 'q';

	int n,d; cin >> n>>d;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < n; j++) {
			cout<<m[d][s[j]];
		}
		cout << endl;
	}
	
	return 0;
}