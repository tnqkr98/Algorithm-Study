#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double a; string s;
		cin >> a >> s;
		cout << fixed;
		cout.precision(4);
		if (s == "kg") cout << a * 2.2046 << " lb" << endl;
		else if (s == "l") cout << a * 0.2642 << " g" << endl;
		else if (s == "lb") cout << a * 0.4536 << " kg" << endl;
		else cout << a * 3.7854 << " l" << endl;
	}
	return 0;
}