#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		double a, b, c; cin >> a >> b >> c;
		cout << s<<" ";
		cout << a + b + c;
		if (a >= 35 *(3/10.) && b >= 25 * (3 / 10.) && c >= 40 * (3 / 10.) && a + b + c >= 55)
			cout << " PASS" << endl;
		else cout << " FAIL" << endl;
	}


	return 0;
}