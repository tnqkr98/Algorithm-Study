#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int a, b; cin >> a >> b;
		for (int j = 0; j < s.length(); j++) {
			if (j < a || j >= b) {
				cout << s[j];
			}
		}
		cout << endl;
	}

	return 0;
}