#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = m - 1; j >= 0; j--)
			cout << s[j];
		cout << endl;
	}
	return 0;
}