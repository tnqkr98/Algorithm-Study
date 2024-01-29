#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,c=0; cin >> n;
	string s,t; cin >> s;
	t = s;
	reverse(s.begin(), s.end());
	for (int i = 0; i < n / 2; i++) {
		if (t[i] != s[i]) c++;
	}
	cout << c;
	return 0;
}