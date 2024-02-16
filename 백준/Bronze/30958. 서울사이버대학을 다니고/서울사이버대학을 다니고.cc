#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	cin.ignore();
	string s;
	int a[26] = { 0 },m=0;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		if (s[i] == ',' || s[i] == '.' || s[i] == ' ') continue;
		a[s[i] - 'a']++;
		if (a[s[i] - 'a'] > m) m = a[s[i] - 'a'];
 	}
	cout << m;
	return 0;
}